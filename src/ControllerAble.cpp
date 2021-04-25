#include "Controller.hpp"
#include "ControllerAble.hpp"

Controller *ControllerAble::controller = nullptr;

void ControllerAble::SetController(Controller *controller)
{
  ControllerAble::controller = controller;
}

ControllerAble::ControllerAble(Actor &actor)
    : Component(actor)
{
  controller->AddControllerAble(this);
}

void ControllerAble::Run()
{
  // TODO
}
