#include "Config.hpp"
#include "SDL_image.h"

namespace Config
{
  namespace Actor
  {
    namespace TestActor
    {
      char const *
          IMAGE_FILE =
              "assets/images/test-actor.png";
    }
  }

  namespace Controller
  {
    Uint8 const
        STOP_GAME =
            SDL_SCANCODE_ESCAPE;
  }

  namespace Game
  {
    Uint32 const // milliseconds
        LOOP_TIME_MAX =
            50;
    Uint32 const // milliseconds
        LOOP_TIME_MIN =
            16;
  }

  namespace Model
  {
  }

  namespace View
  {
    Color const
        BG_COLOR =
            {0, 0, 255, 255};
    int const
        INIT_IMAGE_FLAGS =
            IMG_INIT_PNG;
    Uint32 const
        INIT_RENDERER_FLAGS =
            SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    int const
        INIT_RENDERER_INDEX =
            -1;
    Uint32 const
        INIT_SDL_FLAGS =
            SDL_INIT_VIDEO | SDL_INIT_AUDIO;
    Uint32 const
        INIT_WINDOW_FLAGS =
            0;
    char const *
        TITLE =
            "Title";
    int const
        WINDOW_DIM_X =
            1024;
    int const
        WINDOW_DIM_Y =
            768;
    int const
        WINDOW_POS_X =
            SDL_WINDOWPOS_CENTERED;
    int const
        WINDOW_POS_Y =
            SDL_WINDOWPOS_CENTERED;
  }
}
