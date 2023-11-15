
#include "Loteri.h"

int main()
{
	good::Good* obj = new toy::Toy("Cat", "Ukraine", 150, 3, "blabla");
	good::Good* obj1 = new book::Book("C++", "Pratar", 1000, 14, "ranok");
	good::Good* obj2 = new SQ::SportsEquipment();

	Loteri lotery;

	lotery.addObj(obj);
	lotery.addObj(obj1);
	lotery.addObj(obj2);

	srand(time(0));

	lotery.randGood();

}