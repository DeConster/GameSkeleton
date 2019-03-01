#include "Sprite.h"

Sprite::Sprite(Texture &texture, BoundingBox &box) :
  mTexture(texture),
  mBoundingBox(box)
{
}

Sprite::~Sprite()
{
}
