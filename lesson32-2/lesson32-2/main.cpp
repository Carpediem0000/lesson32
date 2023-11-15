#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "ClassOut.h"

int main()
{
	PV321::Class1 obj1;
	PV321::Class2 obj2;
	PV321::Class3 obj3;
	ClassOut obj4;

	obj1.print();
	obj2.print();
	obj3.print();
	obj4.print();
}