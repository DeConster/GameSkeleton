#include "Level.h"

Level::Level() : mStartPlayerPosX(10), mStartPlayerPosY(10)
{
}

Level::~Level()
{
}

void Level::setMap(std::string & map)
{
  mMap = map;
}

void Level::draw(GraphicFramework &renderer)
{
  renderer.draw(mMap);
  for (auto &enemy : mEnemies)
  {
    enemy.draw(renderer);
  }
}

void Level::update()
{
  for (auto &enemy : mEnemies)
  {
    enemy.update();
  }
}

int Level::getPlayerStartPosX()
{
  return mStartPlayerPosX;
}

int Level::getPlayerStartPosY()
{
  return mStartPlayerPosY;
}
