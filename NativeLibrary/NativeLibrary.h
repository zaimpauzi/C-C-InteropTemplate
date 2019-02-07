#pragma once
#include <string>
#ifdef NATIVELIBRARY_EXPORTS
#define NATIVELIBRARY_API __declspec(dllexport)
#else
#define NATIVELIBRARY_API __declspec(dllimport)
#endif

extern "C" NATIVELIBRARY_API void InteropTarget_string(char *inputText);
extern "C" NATIVELIBRARY_API double InteropTarget_double(double *inputNumber);