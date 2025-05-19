cmake_minimum_required (VERSION 3.8)

project ("CppPluginExample")

add_library(
	CppPluginExample SHARED
	"src/CppPluginExample.h"
	"src/PluginConfiguration.h"
	"src/interfaces/Northstar.h"
	"src/interfaces/Northstar.cpp"
	"src/interfaces/interfaces.h"
	"src/interfaces/interfaces.cpp"
	"src/interfaces/exposed/IPluginId/IPluginId.h"
	"src/interfaces/exposed/IPluginId/IPluginId.cpp"
	"src/interfaces/exposed/IPluginCallbacks/IPluginCallbacks.h"
	"src/interfaces/exposed/IPluginCallbacks/IPluginCallbacks.cpp"
	"src/interfaces/Northstar/INSSys.h"
	"src/CppPluginExample.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CppPluginExample PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
# Seriously, add an assert size and offsets of every structure you use from the game. It's a lifesaver.
