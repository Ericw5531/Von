#include "game/application.h"

SDL_Window* g_window = NULL;
TTF_Font* g_font = NULL;
SDL_Event g_event;
bool g_showCollisionBox = false;
bool g_isPlayerDead = false;
float g_bgmVolume = 25;
float g_sfxVolume = 25;
GameState* g_gameState = NULL;

int main(int argc, char* args[])
{
    Application::getInstance().run();
    return 0;
}
