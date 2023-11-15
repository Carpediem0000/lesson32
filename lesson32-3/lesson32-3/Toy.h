#pragma once
#include "Good.h"

namespace toy {
    class Toy :public good::Good
    {
    protected:
        string matirial;
    public:
        Toy();
        Toy(string name, string author, double price, int age, string matirial);

        void setMatirial(string matirial);
        string getMatirial()const;

        void show()const override;
        string type()const override;
        void save(ofstream& file)const override;
        void load(ifstream& file) override;
    };
}

