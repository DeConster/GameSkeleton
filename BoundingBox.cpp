#include "BoundingBox.h"

BoundingBox::BoundingBox(int x, int y, int width, int height) :
  mAnchorX(x),
  mAnchorY(y),
  mWidth(width),
  mHeight(height)
{
}

BoundingBox::~BoundingBox()
{
}
