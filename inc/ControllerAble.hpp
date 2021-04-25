#pragma once
#include "Component.hpp"

class ControllerAble : public Component
{
public:
  static void SetController(class Controller *controller);

  ControllerAble(class Actor &actor);

  void Run();

private:
  static class Controller *controller;
};
