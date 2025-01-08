#include "PreCompiledHeader.h"
#include "Actor.h"

#include "Core.h"

Actor::Actor()
	: isActive(true), isExpired(false)
{
}

Actor::~Actor()
{
}

void Actor::Update(float delatTime)
{
}

void Actor::Draw()
{
}

void Actor::SetPosition(const Vector2& newPosition)
{
	position = newPosition;
}

inline Vector2 Actor::Position() const
{
	return position;
}