#pragma once

class Window
{
public:
  Window();
  ~Window();

  bool isClosed();

private:
  bool mIsClosed;
};

