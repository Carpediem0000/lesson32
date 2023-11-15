#pragma once
#include "Good.h"
#include "Toy.h"
#include "Book.h"
#include "SportsEquipment.h"
#include <vector>

class Loteri
{
	vector<good::Good*> goods;
public:
	Loteri();
	~Loteri();
	//good::Good* operator[](const int ind);

	void addObj(good::Good* obj);
	//void removeObj(int ind);
	void randGood();

	void print()const;
};

