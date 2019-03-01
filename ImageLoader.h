#pragma once

#include <string>

class ImageLoader
{
public:
  ImageLoader() = delete;
  ~ImageLoader() = delete;

  static char* loadImage(std::string path); // I'm don't sure about return type
};

