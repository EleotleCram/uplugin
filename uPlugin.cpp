#include "uPlugin.h"

uPluginsImpl uPlugins;

static uPlugin **plugins = 0;

void uPluginsImpl::setup(uPlugin **plugins_) {
  plugins = plugins_;

  for (int i = 0; plugins[i]; i++) {
    plugins[i]->setup();
  }
}

void uPluginsImpl::loop() {
  if (plugins) {
    for (int i = 0; plugins[i]; i++) {
      plugins[i]->loop();
    }
  }
}
