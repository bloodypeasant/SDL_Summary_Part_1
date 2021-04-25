#include "Config.hpp"
#include "TestActor.hpp"
#include "ViewAble.hpp"

using namespace Config::Actor::TestActor;

TestActor::TestActor(class Model &model, int posX, int posY)
    : Actor(model, posX, posY)
{
  ViewAble *viewAble = new ViewAble(*this);
  viewAble->SetTexture(IMAGE_FILE);
}
