#include "Book.h"

book::Book::Book()
{
    this->edition = "Undefined";
}

book::Book::Book(string name, string author, double price, int age, string edition)
    : good::Good(name, author, price, age)
{
    this->edition = edition;
}

void book::Book::setEdition(string edition)
{
    this->edition = edition;
}

string book::Book::getEdition() const
{
    return edition;
}

void book::Book::show() const
{
    cout << "\t" << type() << endl;
    cout << "Name: " << name << endl;
    cout << "Edition: " << edition << endl;
    cout << "Age: " << age << "+" << endl;
    cout << "Monifacture: " << author << endl;
    cout << "Price: " << price << endl;
}

string book::Book::type() const
{
    return "Book";
}

void book::Book::save(ofstream& file) const
{
    file << type() << endl;
    file << name << endl;
    file << author << endl;
    file << price << endl;
    file << age << endl;
    file << edition << endl;
}

void book::Book::load(ifstream& file)
{
    getline(file, name);
    getline(file, author);
    file >> price;
    file >> age;
    file.get();
    getline(file, edition);
}
