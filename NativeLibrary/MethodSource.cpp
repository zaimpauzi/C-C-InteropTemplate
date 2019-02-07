#include "stdafx.h"
#include <iostream>
#include <string>

//using namespace std;
#include "MethodHeader.h"
using namespace methodNamespace;

methodClass::methodClass()
{
}

methodClass::~methodClass()
{
}

void methodClass::stringMethod(char *inputString) {
	
	printf(inputString);
	std::string text = "test";
	
}

double methodClass::doubleMethod(double *inputDouble) {
	
	double addNumbers = inputDouble[0] + 0.5;
	return addNumbers;

}
