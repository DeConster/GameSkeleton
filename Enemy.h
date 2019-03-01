#pragma once

#include "Creature.h"

class Enemy : public Creature
{
public:
  Enemy(Sprite &sprite);
  ~Enemy();
};

