#pragma once
class BoundingBox
{
public:
  BoundingBox(int x, int y, int width, int height);
  ~BoundingBox();

private:
  int mAnchorX;
  int mAnchorY;
  int mHeight;
  int mWidth;
};

