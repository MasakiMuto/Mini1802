#include "DxLib.h"
#include "engine.h"
#include "actor_factory.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
  ChangeWindowMode(1);
  SetGraphMode(640, 480, 32);
  if (DxLib_Init() == -1) {
    return 1;
  }

  SetDrawScreen(DX_SCREEN_BACK);
  mini::engine engine;
  mini::actor_factory factory;
  engine.add_actor(factory.create_player(120));
  engine.add_actor(factory.create_player(420));

  while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
    engine.update();

    ClearDrawScreen();
    engine.render();
    ScreenFlip();
  }

  DxLib_End();
  return 0;
}
