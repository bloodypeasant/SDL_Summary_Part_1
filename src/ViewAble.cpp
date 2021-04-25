#include <algorithm>
#include "Actor.hpp"
#include "SDL_image.h"
#include "View.hpp"
#include "ViewAble.hpp"

SDL_Renderer *ViewAble::renderer = nullptr;
View *ViewAble::view = nullptr;
std::unordered_map<std::string, SDL_Texture *> ViewAble::textures;

void ViewAble::SetRenderer(SDL_Renderer *renderer)
{
  ViewAble::renderer = renderer;
}

void ViewAble::SetView(View *view)
{
  ViewAble::view = view;
}

ViewAble::ViewAble(Actor &actor)
    : Component(actor)
{
  view->AddViewAble(this); // TO DO -- this is where segmentation error is arising
}

void ViewAble::Run()
{
  SDL_Rect rect{static_cast<int>(actor.GetPosX() - 0.5 * textureWidth),
                static_cast<int>(actor.GetPosY() - 0.5 * textureHeight),
                textureWidth, textureHeight};
  SDL_RenderCopyEx(renderer, texture, nullptr, &rect, 0, nullptr,
                   SDL_FLIP_NONE);
}

void ViewAble::SetTexture(const std::string &fileName)
{
  //std::unordered_map<std::string, SDL_Texture *> textures = ViewAble::view->GetTextures();
  auto it = textures.find(fileName);
  if (it != textures.end())
  {
    texture = it->second;
  }
  else
  {
    SDL_Surface *surface = IMG_Load(fileName.c_str());
    if (!surface)
    {
      SDL_Log("Failed to load texture file %s", fileName.c_str());
      texture = nullptr;
      return;
    }
    texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    if (!texture)
    {
      SDL_Log("Failed to convert surface to texture for %s", fileName.c_str());
      texture = nullptr;
      return;
    }
    textures.emplace(fileName.c_str(), texture);
  }
  SDL_QueryTexture(texture, nullptr, nullptr, &textureWidth, &textureHeight);
}
