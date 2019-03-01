#include "Texture.h"

Texture::Texture(int x, int y, int width, int height, std::string texturePath) : 
  mX(x),
  mY(y),
  mWidth(width),
  mHeight(height),
  mTexturePath(texturePath),
  mData(nullptr)
{
  ImageLoader::loadImage(texturePath);
}

Texture::~Texture()
{
}
