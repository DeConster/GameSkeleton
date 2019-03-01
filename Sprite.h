#pragma once

#include "Texture.h"
#include "BoundingBox.h"

class Sprite
{
public:
  Sprite(Texture &texture, BoundingBox &box);
  ~Sprite();

private:
  Texture mTexture;
  BoundingBox mBoundingBox;
};

