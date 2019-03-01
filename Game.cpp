#include "Game.h"

Game::Game() : mExit(false), mCurrentLevel(0)
{
}

Game::~Game()
{
}

void Game::run()
{
  init();
  while (!mExit && !mWindow.isClosed())
  {
    update();
    draw();
  }
}

void Game::update()
{
  mLevels[mCurrentLevel].update();
  mPlayer->update();
}

void Game::draw()
{
  mLevels[mCurrentLevel].draw(mRenderer);
  mPlayer->draw(mRenderer);
}

void Game::init()
{
  levelsInit();
  playerInit();
}

void Game::playerInit()
{
  // this fields can be constant
  int playerTextureX = 0;
  int playerTextureY = 0;
  int playerTextureWidth = 32;
  int playerTextureHeight = 32;

  Texture texture(playerTextureX, playerTextureY, playerTextureWidth, playerTextureHeight, "path/to/player/texture");
  BoundingBox box(mLevels[mCurrentLevel].getPlayerStartPosX(), mLevels[mCurrentLevel].getPlayerStartPosY(), 32, 32);
  Sprite sprite(texture, box);
  mPlayer = new Player(sprite);
}

void Game::levelsInit()
{
  //load and init levels
}
