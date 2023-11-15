#pragma once
#include "Class1.h"

namespace PV321 {
	class Class3 :public Class1 {
	public:
		void print()const {
			Class1::print();
			std::cout << "Class3\n\n";
		}
	};
}
