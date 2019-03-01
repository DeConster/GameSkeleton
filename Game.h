#pragma once

#include "Window.h"
#include "GraphicFramework.h"
#include "Player.h"
#include <vector>
#include "Level.h"

class Game
{
public:
  Game();
  ~Game();

  void run();
  void update();
  void draw();
  void init();

private:
  void playerInit();
  void levelsInit();

  bool mExit;
  Window mWindow;
  GraphicFramework mRenderer;
  Player *mPlayer;
  std::vector<Level> mLevels;
  int mCurrentLevel;
};

