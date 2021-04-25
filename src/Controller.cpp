#include <algorithm>
#include "Game.hpp"
#include "Config.hpp"
#include "Controller.hpp"
#include "ControllerAble.hpp"
#include "SDL.h"

using namespace Config::Controller;

Controller::Controller(Game &game)
    : game(game) {}

void Controller::AddControllerAble(ControllerAble *controllerAble)
{
  controllerAbles.emplace_back(controllerAble);
}

void Controller::Finalize() {}

void Controller::Initialize() {}

void Controller::RemoveControllerAble(ControllerAble *controllerAble)
{
  auto it = std::find(controllerAbles.begin(), controllerAbles.end(),
                      controllerAble);
  if (it != controllerAbles.end())
  {
    std::iter_swap(it, controllerAbles.end() - 1);
    controllerAbles.pop_back();
  }
}

void Controller::Run()
{
  SDL_Event event;
  while (SDL_PollEvent(&event))
  {
    switch (event.type)
    {
    case SDL_QUIT:
      game.StopGame();
      break;
    }
  }

  const Uint8 *keyState = SDL_GetKeyboardState(NULL);
  if (keyState[STOP_GAME])
  {
    game.StopGame();
  }
}
