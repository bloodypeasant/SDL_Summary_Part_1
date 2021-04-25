#include <algorithm>
#include "Actor.hpp"
#include "Component.hpp"
#include "Model.hpp"

Actor::Actor(Model &model, float posX, float posY)
    : model(model), pos(posX, posY)
{
  model.AddActor(this);
}

Actor::~Actor()
{
  model.RemoveActor(this);
  while (!components.empty())
  {
    delete components.back();
  }
}

void Actor::AddComponent(Component *component)
{
  components.emplace_back(component);
}

void Actor::RemoveComponent(Component *component)
{
  auto it = std::find(components.begin(), components.end(), component);
  if (it != components.end())
  {
    std::iter_swap(it, components.end() - 1);
    components.pop_back();
  }
}
