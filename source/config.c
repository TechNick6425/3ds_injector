#include "config.h"
#include "fs.h"

int loaded = 0;
int current = 0;

int configLoaded() {
    return loaded;
}

void loadConfig() {
    fileRead(&current, "/loader.cfg", 1);
    if(current != 0) loaded = 1;
}

int currentConfig() {
    return current;
}

