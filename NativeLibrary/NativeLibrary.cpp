// NativeLibrary.cpp : Defines the exported functions for the DLL application.
//


#include "stdafx.h"
#include "MethodHeader.h"
#include "NativeLibrary.h"

using namespace methodNamespace;

extern "C" NATIVELIBRARY_API void InteropTarget_string(char *inputText)
{
	methodClass m;
	m.stringMethod(inputText);
	
}

extern "C" NATIVELIBRARY_API double InteropTarget_double(double *inputNumber)
{
	methodClass m;
	return m.doubleMethod(inputNumber);

}
