#pragma once

class Component
{
public:
  Component(class Actor &actor);
  ~Component();

protected:
  class Actor &actor;
};
