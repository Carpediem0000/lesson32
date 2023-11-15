#pragma once
#include "Good.h"

namespace SQ {
	class SportsEquipment :public good::Good
	{
	protected:
		string kind;
	public:
		SportsEquipment();
		SportsEquipment(string name, string author, double price, int age, string kind);

		void setKind(string kind);
		string getKind()const;

		void show()const override;
		string type()const override;
		void save(ofstream& file)const override;
		void load(ifstream& file) override;
	};
}

