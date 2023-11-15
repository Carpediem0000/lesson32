#include "SportsEquipment.h"

SQ::SportsEquipment::SportsEquipment()
{
    this->kind = "Sport";
}

SQ::SportsEquipment::SportsEquipment(string name, string author, double price, int age, string kind)
    : good::Good(name, author, price, age)
{
    this->kind = kind;
}

void SQ::SportsEquipment::setKind(string kind)
{
    this->kind = kind;
}

string SQ::SportsEquipment::getKind() const
{
    return kind;
}

void SQ::SportsEquipment::show() const
{
    cout << "\t" << type() << endl;
    cout << "Name: " << name << endl;
    cout << "Kind of sport: " << kind << endl;
    cout << "Age: " << age << "+" << endl;
    cout << "Monifacture: " << author << endl;
    cout << "Price: " << price << endl;
}

string SQ::SportsEquipment::type() const
{
    return "SportsEquipment";
}

void SQ::SportsEquipment::save(ofstream& file) const
{
    file << type() << endl;
    file << name << endl;
    file << author << endl;
    file << price << endl;
    file << age << endl;
    file << kind << endl;
}

void SQ::SportsEquipment::load(ifstream& file)
{
    getline(file, name);
    getline(file, author);
    file >> price;
    file >> age;
    file.get();
    getline(file, kind);
}
