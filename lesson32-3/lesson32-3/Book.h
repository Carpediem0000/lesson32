#pragma once
#include "Good.h"

namespace book {
	class Book :public good::Good
	{
	protected:
		string edition;
	public:
		Book();
		Book(string name, string author, double price, int age, string edition);

		void setEdition(string edition);
		string getEdition()const;

		void show()const override;
		string type()const override;
		void save(ofstream& file)const override;
		void load(ifstream& file) override;
	};
}

