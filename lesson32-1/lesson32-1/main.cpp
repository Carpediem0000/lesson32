#include "MyClass.h"
#include "MyClass2.h"
#include "MyClass3.h"

int main()
{
	MyNs1::MyClass obj1;
	MyNs1::MyClass2 obj2;

	obj1.show();
	obj2.show();

	MyNs2::MyClass obj3;
	obj3.print();
	using namespace MyNs1;
	MyClass obj4;
	MyClass2 obj5;
	obj4.show();
	obj5.show();

	MyNs2::MyClass2 obj6;
	obj6.print();
}