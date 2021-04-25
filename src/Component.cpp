#include "Actor.hpp"
#include "Component.hpp"

Component::Component(Actor &actor)
    : actor(actor)
{
  actor.AddComponent(this);
}

Component::~Component()
{
  actor.RemoveComponent(this);
}
