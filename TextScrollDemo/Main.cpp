#include "Game/Game.h"
#include "Level/TextScrollLevel.h"

int main()
{
	Game game;
	game.LoadLevel(new TextScrollLevel());
	game.Run();
}