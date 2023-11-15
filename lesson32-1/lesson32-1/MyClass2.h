#pragma once
#include <iostream>
using std::cout;

namespace MyNs2 {
	class MyClass
	{
	public:
		void print()const {
			cout << "In MyNs2: MyClass\n";
		}
	};
}

