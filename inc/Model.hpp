#pragma once
#include "SDL.h"
#include <vector>

class Model
{
public:
  Model(class Game &game);

  void AddActor(class Actor *actor);
  void Finalize();
  void Initialize();
  void RemoveActor(class Actor *actor);
  void Run(Uint32 timeChange);

private:
  class Game &game;
  std::vector<class Actor *> actors;
};
