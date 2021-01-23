#ifndef CARBUILDER_H
#define CARBUILDER_H
#include "Masina.h"


class CarBuilder
{
    public:
        CarBuilder();
        CarBuilder& producator(std::string producator);
        CarBuilder& nr_inmatriculare(std::string nr_inmatriculare);
        CarBuilder& combustibil(std::string combustibil);
        CarBuilder& consum(double consum);
        CarBuilder& kilometraj(long long kilometraj);
        CarBuilder& an_fabricatie(int an_fabricatie);
        Masina build();

    protected:

    private:
        Masina m;

};

#endif // CARBUILDER_H
