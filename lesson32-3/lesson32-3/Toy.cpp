#include "Toy.h"

toy::Toy::Toy()
{
    this->matirial = "Undefined";
}

toy::Toy::Toy(string name, string author, double price, int age, string matirial)
    : good::Good(name, author, price, age)
{
    this->matirial = matirial;
}

void toy::Toy::setMatirial(string matirial)
{
    this->matirial = matirial;
}

string toy::Toy::getMatirial() const
{
    return matirial;
}

void toy::Toy::show() const
{
    cout << "\t" << type() << endl;
    cout << "Name: " << name << endl;
    cout << "Matirial: " << matirial << endl;
    cout << "Age: " << age << "+" << endl;
    cout << "Monifacture: " << author << endl;
    cout << "Price: " << price << endl;
}

string toy::Toy::type() const
{
    return "Toy";
}

void toy::Toy::save(ofstream& file) const
{
    file << type() << endl;
    file << name << endl;
    file << author << endl;
    file << price << endl;
    file << age << endl;
    file << matirial << endl;
}

void toy::Toy::load(ifstream& file)
{
    getline(file, name);
    getline(file, author);
    file >> price;
    file >> age;
    file.get();
    getline(file, matirial);
}
