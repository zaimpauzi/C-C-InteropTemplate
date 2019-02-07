//#pragma once
#ifndef METHODHEADER_H
#define METHODHEADER_H
#include <iostream>
#include <string>
//using namespace std;

namespace methodNamespace {
	class methodClass
	{
	public:
		methodClass();
		~methodClass();
		void stringMethod(char *inputString);
		double doubleMethod(double *inputDouble);

	};
}
#endif //METHODHEADER_H