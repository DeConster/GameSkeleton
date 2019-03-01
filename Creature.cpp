#include "Creature.h"

Creature::Creature(Sprite &sprite) :
  mSprite(sprite) 
{
}

Creature::~Creature()
{
}

void Creature::update()
{
}

void Creature::draw(GraphicFramework & renderer)
{
  renderer.draw(mSprite);
}

void Creature::getDamage(int damage)
{
}

bool Creature::isDead()
{
  return false;
}
