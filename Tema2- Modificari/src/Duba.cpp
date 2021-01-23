#include "Duba.h"
#include <iostream>
Duba::Duba(std::string producator = " ", std::string nr_inmatriculare= " ", std::string combustibil = " ",
           double consum=0, long long kilometraj=0, int an_fabricatie=0, int nr_locuri=0)
    :Masina(producator, nr_inmatriculare, combustibil, consum, kilometraj, an_fabricatie), nr_locuri(nr_locuri)
{

}
std::ostream& operator<<(std::ostream& out, const Duba& d)
{
    const Masina* m = &d;
    out << "Duba(" << *m << ", nr_locuri: " << d.nr_locuri << ")";
    return out;
}
bool Duba::polueaza() const
{
    if(combustibil == "Diesel")
    {
        if(nr_locuri>8)
            return true;
        else if(kilometraj>400000)
            return true;
        else
            return false;
    }
    else
    {

        if(an_fabricatie<2008)
            return true;
        else
            return false;
    }


}
