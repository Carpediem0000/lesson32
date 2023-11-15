#include "Loteri.h"

Loteri::Loteri()
{
}

Loteri::~Loteri()
{
	for (int i = 0; i < goods.size(); i++)
	{
		delete goods[i];
	}
	goods.clear();
}

void Loteri::addObj(good::Good* obj)
{
	goods.push_back(obj);
}

void Loteri::randGood()
{
	int n = rand() % goods.size() + goods.size() * 0.5;
	if (n >= goods.size())
	{
		cout << "Try again...\n";
	}
	else
	{
		cout << "Congreat\n";
		goods[n]->show();
		delete goods[n];
		goods.erase(goods.begin() + n);
	}
}

void Loteri::print() const
{
	for (good::Good* obj: goods)
	{
		obj->show();
	}
}

