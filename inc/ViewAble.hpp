#pragma once
#include <string>
#include <unordered_map>
#include "Component.hpp"
#include "SDL.h"

class ViewAble : public Component
{
public:
  static void SetRenderer(SDL_Renderer *renderer);
  static void SetView(class View *view);

  ViewAble(class Actor &actor);

  void Run();
  void SetTexture(const std::string &fileName);

  static SDL_Renderer *renderer;
  static class View *view;
  static std::unordered_map<std::string, SDL_Texture *> textures;

  SDL_Texture *texture = nullptr;
  int textureHeight = 0;
  int textureWidth = 0;
};
