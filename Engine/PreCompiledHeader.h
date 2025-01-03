#pragma once

// 미리 컴파일된 헤더.
#include <Windows.h>
#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

// 메모리 삭제 함수.
template<typename T>
void SafeDelete(T* pointer)
{
	if (pointer != nullptr)
	{
		delete pointer;
		pointer = nullptr;
	}
}

// 디버깅 용도.
#ifdef _DEBUG
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define new new
#endif

#if ENGINE_BUILD_DLL
#define ENGINE_API __declspec(dllexport)
#else
#define ENGINE_API __declspec(dllimport)
#endif