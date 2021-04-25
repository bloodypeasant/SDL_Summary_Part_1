#include <algorithm>
#include "Actor.hpp"
#include "Game.hpp"
#include "Model.hpp"
#include "TestActor.hpp"

Model::Model(Game &game)
    : game(game) {}

void Model::AddActor(Actor *actor)
{
  actors.emplace_back(actor);
}

void Model::Finalize() {}

void Model::Initialize()
{
  AddActor(new TestActor(*this, 300, 300));
}

void Model::RemoveActor(Actor *actor)
{
  auto it = std::find(actors.begin(), actors.end(), actor);
  if (it != actors.end())
  {
    std::iter_swap(it, actors.end() - 1);
    actors.pop_back();
  }
}

void Model::Run(Uint32 timeChange) {}
