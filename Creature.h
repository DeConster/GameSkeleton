#pragma once

#include "GraphicFramework.h"

class Creature
{
public:
  Creature(Sprite &sprite);
  ~Creature();

  void update();
  void draw(GraphicFramework &renderer);
  void getDamage(int damage);
  bool isDead();

private:
  Sprite mSprite;
};

