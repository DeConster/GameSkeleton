#pragma once

#include <string>
#include "GraphicFramework.h"
#include <vector>
#include "Enemy.h"

class Level
{
public:
  Level();
  ~Level();

  void setMap(std::string &map);
  void draw(GraphicFramework &renderer);
  void update();
  int getPlayerStartPosX();
  int getPlayerStartPosY();

private:
  std::string mMap;
  int mStartPlayerPosX;
  int mStartPlayerPosY;
  std::vector<Enemy> mEnemies;
};

