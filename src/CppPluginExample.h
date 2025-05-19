#pragma once

// Plugin settings are located in PluginConfiguration.h

#include "interfaces/interfaces.h"

// The real "entry" is the IPluginCallbacks::Init callback.
// You can find it at src/interfaces/exposed/IPluginCallbacks.cpp

// src/interfaces/exposed are interfaces this plugin exposes
// src/interfaces/Northstar are interfaces that NS exposes and which are used by this plugin.
// src/interfaces/Northstar.cpp manages interfaces acquired from Northstar
