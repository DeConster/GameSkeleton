#include "Window.h"

Window::Window() : mIsClosed(false)
{
}

Window::~Window()
{
}

bool Window::isClosed() {
  return mIsClosed;
}
