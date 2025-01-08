#include "Game/Game.h"
#include "Level/TestLevel.h"

int main()
{
	Game game;
	game.LoadLevel(new TestLevel());
	game.Run();
}