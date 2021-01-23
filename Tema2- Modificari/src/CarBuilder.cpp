#include "CarBuilder.h"
#include "Masina.h"
CarBuilder::CarBuilder(): m(){}


CarBuilder& CarBuilder::producator(std::string producator)
{
    m.producator=producator;
    return *this;
}

CarBuilder& CarBuilder::nr_inmatriculare(std::string nr_inmatriculare)
{
    m.nr_inmatriculare=nr_inmatriculare;
    return *this;
}

CarBuilder& CarBuilder::combustibil(std::string combustibil)
{
    m.combustibil=combustibil;
    return *this;
}

CarBuilder& CarBuilder::consum(double consum)
{
    m.consum=consum;
    return *this;
}

CarBuilder& CarBuilder::kilometraj(long long kilometraj)
{
    m.kilometraj=kilometraj;
    return *this;
}

CarBuilder& CarBuilder::an_fabricatie(int an_fabricatie)
{
    m.an_fabricatie=an_fabricatie;
    return *this;
}

Masina CarBuilder::build()
{
    return m;
}

