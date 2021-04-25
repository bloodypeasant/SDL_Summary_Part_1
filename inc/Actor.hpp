#pragma once
#include <vector>
#include "Vector2.hpp"

class Actor
{
public:
  Actor(class Model &model, float posX, float posY);
  ~Actor();

  void AddComponent(class Component *component);
  float GetPosX() { return pos.x; }
  float GetPosY() { return pos.y; }
  void RemoveComponent(class Component *component);

protected:
  class Model &model;
  std::vector<class Component *> components;
  Vector2 pos;
};
