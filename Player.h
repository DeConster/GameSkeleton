#pragma once

#include "GraphicFramework.h"
#include "Sprite.h"
#include "Creature.h"

class Player : public Creature
{
public:
  Player(Sprite &sprite);
  ~Player();

private:
};

