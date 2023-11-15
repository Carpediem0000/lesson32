#include "MyClass.h"

void MyNs1::MyClass::show() const
{
	using namespace std;
	cout << "In MyNS1: class MyClass\n";
}

void MyNs1::MyClass2::show() const
{
	using namespace std;
	cout << "In MyNS1: class MyClass2\n";
}
