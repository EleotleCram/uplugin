#pragma once

class uPlugin {
public:
  virtual void setup() {
    // The uPlugin setup code goes here ...
  }
  virtual void loop() {
    // The uPlugin loop code goes here ...
  }
};

class uPluginsImpl {
public:
  void setup(uPlugin **plugins);
  void loop();
};

extern uPluginsImpl uPlugins;
