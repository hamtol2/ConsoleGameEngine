#include "TextScrollLevel.h"
#include "Actor/TextScrollActor.h"

TextScrollLevel::TextScrollLevel()
{
	AddActor(new TextScrollActor("Welcome to the Console Game Engine class..."));
}