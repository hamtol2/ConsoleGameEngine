#pragma once

#include "Core.h"

// 입력 처리를 위한 구조체.
struct KeyState
{
	// 현재 프레임에 키가 눌렸는지 확인.
	bool isKeyDown = false;

	// 이전 프레임에 키가 눌렸었는지 확인.
	bool wasKeyDown = false;
};

// 엔진 클래스.
class Level;
class ENGINE_API Engine
{
public:
	Engine();
	virtual ~Engine();

	// 엔진 실행 함수.
	void Run();

	// 레벨 추가 함수.
	void LoadLevel(Level* newLevel);

	// 입력 관련 함수.
	bool GetKey(int key);
	bool GetKeyDown(int key);
	bool GetKeyUp(int key);

	// 엔진 종료 함수.
	void QuitGame();

	// 싱글톤 객체 접근 함수.
	static Engine& Get();

protected:
	void ProcessInput();				// 입력 처리.
	void Update(float deltaTime);		// Tick();
	void Draw();						// Render();

	// 이전 프레임의 키 상태를 저장하는 함수.
	void SavePreviouseKeyStates();

protected:

	// 종료할 때 설정할 변수.
	bool quit;

	// 키 상태를 저장하는 배열.
	KeyState keyState[255];

	// 싱글톤 구현을 위한 전역 변수 선언.
	static Engine* instance;

	// 메인 레벨 변수.
	Level* mainLevel;
};