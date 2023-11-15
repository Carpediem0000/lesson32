#pragma once
#include "Class1.h"

class ClassOut:public PV321::Class1
{
public:
	void print()const {
		PV321::Class1::print();
		std::cout << "ClassOut\n\n";
	}
private:

};