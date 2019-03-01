#pragma once

#include <string>
#include "ImageLoader.h"

class Texture
{
public:
  Texture(int x, int y, int width, int height, std::string texturePath);
  ~Texture();

private:
  char* mData; // I don't know what type of readed image
  std::string mTexturePath;
  int mX;
  int mY;
  int mWidth;
  int mHeight;
};

