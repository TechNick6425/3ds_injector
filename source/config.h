#pragma once

#include "types.h"

int configLoaded();
void loadConfig();
int currentConfig();

#define LOAD_MODULES (bool)(currentConfig() & BIT(0))