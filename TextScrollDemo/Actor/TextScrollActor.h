#pragma once

#include <Actor/Actor.h>

class TextScrollActor : public Actor
{
	RTTI_DECLARATIONS(TextScrollActor, Actor)

public:
	TextScrollActor(const char* message);
	~TextScrollActor();

	virtual void Update(float delatTime) override;
	virtual void Draw() override;

private:
	// 화면에 보여줄 문자열 값.
	char* string = nullptr;

	// 문자열 길이.
	int length = 0;

	// 화면에 보여줄 문자열의 시작 인덱스.
	int index = 0;

	// 화면에 보여줄 문자 길이.
	int printWidth = 20;

	// 딜레이를 위한 변수.
	float elapsedTime = 0.0f;
	float delayTime = 0.5f;
};