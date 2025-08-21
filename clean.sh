#!/bin/bash

# NSCppPluginTemplate Clean Script
# Removes build artifacts and the plugin from Northstar directory

# Configuration
PROJECT_NAME="CppPluginExample"
BUILD_DIR="build-windows"
NORTHSTAR_PLUGINS_DIR="$HOME/Games/Steam/steamapps/common/Titanfall2/R2Northstar/plugins"
OUTPUT_DLL="lib${PROJECT_NAME}.dll"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}=== NSCppPluginTemplate Clean Script ===${NC}"

# Remove build directory
if [ -d "$BUILD_DIR" ]; then
    echo -e "${YELLOW}Removing build directory: $BUILD_DIR${NC}"
    rm -rf "$BUILD_DIR"
    echo -e "${GREEN}Build directory removed.${NC}"
else
    echo -e "${YELLOW}Build directory not found.${NC}"
fi

# Remove plugin from Northstar directory
if [ -f "$NORTHSTAR_PLUGINS_DIR/$OUTPUT_DLL" ]; then
    echo -e "${YELLOW}Removing plugin from Northstar: $OUTPUT_DLL${NC}"
    rm -f "$NORTHSTAR_PLUGINS_DIR/$OUTPUT_DLL"
    echo -e "${GREEN}Plugin removed from Northstar.${NC}"
else
    echo -e "${YELLOW}Plugin not found in Northstar directory.${NC}"
fi

echo -e "${GREEN}=== Clean complete! ===${NC}"
