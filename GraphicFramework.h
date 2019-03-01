#pragma once

#include "Sprite.h"
#include "Texture.h"

class GraphicFramework
{
public:
  GraphicFramework();
  ~GraphicFramework();

  void draw(Sprite &sprite);
  void draw(int sX, int sY, int sW, int sH, int tX, int tY, int tW, int tH);
  void draw(Sprite &sprite, Texture &texture);
  void draw(std::string map);

private:

};

