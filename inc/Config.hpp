#pragma once
#include "Color.hpp"
#include "SDL.h"

namespace Config
{
  namespace Actor
  {
    namespace TestActor
    {
      extern char const *IMAGE_FILE;
    }
  }

  namespace Controller
  {
    extern Uint8 const STOP_GAME;
  }

  namespace Game
  {
    extern Uint32 const LOOP_TIME_MAX;
    extern Uint32 const LOOP_TIME_MIN;
  }

  namespace Model
  {
  }

  namespace View
  {
    extern Color const BG_COLOR;
    extern int const INIT_IMAGE_FLAGS;
    extern Uint32 const INIT_RENDERER_FLAGS;
    extern int const INIT_RENDERER_INDEX;
    extern Uint32 const INIT_SDL_FLAGS;
    extern Uint32 const INIT_WINDOW_FLAGS;
    extern char const *TITLE;
    extern int const WINDOW_DIM_X;
    extern int const WINDOW_DIM_Y;
    extern int const WINDOW_POS_X;
    extern int const WINDOW_POS_Y;
  }
}
