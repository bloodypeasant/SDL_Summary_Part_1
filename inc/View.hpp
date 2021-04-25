#pragma once
//#include <string>
//#include <unordered_map>
#include <vector>
#include "SDL.h"

class View
{
public:
  View(class Game &game);

  void AddViewAble(class ViewAble *viewAble);
  void Finalize();
  //std::unordered_map<std::string, SDL_Texture *> &GetTextures();
  bool Initialize();
  void RemoveViewAble(class ViewAble *viewAble);
  void Run();

private:
  class Game &game;
  SDL_Renderer *renderer;
  SDL_Window *window;
  //std::unordered_map<std::string, SDL_Texture *> textures;
  std::vector<class ViewAble *> viewAbles;
};
