#include "Masina.h"
#include <string>
#include <iostream>

Masina& Masina::operator=(Masina& other)
{
    if (this == &other)
        return *this;
    producator = other.producator;
    nr_inmatriculare = other.nr_inmatriculare;
    combustibil = other.combustibil;
    consum = other.consum;
    kilometraj = other.kilometraj;
    an_fabricatie = other.an_fabricatie;
    return *this;
}
Masina::~Masina()
{
}
std::ostream& operator<<(std::ostream& out, const Masina& m)
{
    out << "Masina(" << "producator: " << m.producator << ", nr_inmatriculare: " << m.nr_inmatriculare << ", combustibil: " << m.combustibil << ", consum: " << m.consum << ", kilometraj: " << m.kilometraj << ", an_fabricatie: " << m.an_fabricatie << ", polueaza: " << (m.polueaza() ? "da" : "nu") << ")";
    return out;
}

std::string Masina::get_combustibil() const
{
    return combustibil;
}
double Masina::get_consum() const
{
    return consum;
}
long long Masina::get_kilometraj() const
{
    return kilometraj;
}
int Masina::get_an_fabricatie() const
{
    return an_fabricatie;
}

Masina::Masina(std::string producator = " ", std::string nr_inmatriculare= " ", std::string combustibil = " ",
               double consum=0, long long kilometraj=0, int an_fabricatie=0)
{

    this->producator = producator;
    this->nr_inmatriculare= nr_inmatriculare;
    this->combustibil= combustibil;
    this->consum= consum;
    this->kilometraj=kilometraj;
    this->an_fabricatie=an_fabricatie;

}
Masina::Masina(Masina& masina)
{
    this->producator = masina.producator;
    this->nr_inmatriculare= masina.nr_inmatriculare;
    this->combustibil= masina.combustibil;
    this->consum= masina.consum;
    this->kilometraj=masina.kilometraj;
    this->an_fabricatie=masina.an_fabricatie;

}
bool Masina::polueaza() const
{

    if(combustibil == "Diesel")
    {
        if(an_fabricatie<2009)
            return true;
        else if(kilometraj>200000)
            return true;
        else
            return false;
    }
    else
    {

        if(an_fabricatie<2004)
            return true;
        else
            return false;
    }


}
