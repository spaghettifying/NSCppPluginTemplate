#include "IPluginCallbacks.h"
#include "../../interfaces.h"
#include "../../Northstar.h"
#include <stdio.h>
#include <string>

class CPluginCallbacks : public IPluginCallbacks
{
	void Init(HMODULE northstarModule, const PluginNorthstarData* initData, bool reloaded) {
		if (!InitNSSys(northstarModule))
		{
			// could not get the NSSys interface
			// (something went very wrong or the installed Northstar version is very old)
			printf("could not initialize NSSys");
			return;
		}

		g_nssys->Log(0, LogLevel::INFO, "Hello World");
	}

	void OnLibraryLoaded(HMODULE module, const char* name) {
		if (strcmp(name, "server.dll") == 0)
		{
			// initialize your server squirrel api here ...
		}

		if (strcmp(name, "client.dll") == 0)
		{
			// initialize your client squirrel api here ...
		}
	}

	void Finalize() {}

	void Unload() {}

	void OnSqvmCreated(void* c_sqvm) {}

	void OnSqvmDestroying(void* c_sqvm) {}

	void RunFrame() {}
};

EXPOSE_SINGLE_INTERFACE(CPluginCallbacks, IPluginCallbacks, PLUGIN_CALLBACKS_VERSION)
