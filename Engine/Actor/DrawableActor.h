#pragma once

#include "Actor.h"

class ENGINE_API DrawableActor : public Actor
{
	// RTTI.
	RTTI_DECLARATIONS(DrawableActor, Actor)

public:
	DrawableActor(char image = ' ');
	virtual ~DrawableActor() = default;

	virtual void Draw() override;
	virtual void SetPosition(const Vector2& newPosition) override;

private:
	// 화면에 그릴 문자 값.
	char image;
};