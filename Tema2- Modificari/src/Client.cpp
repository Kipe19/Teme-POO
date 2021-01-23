#include "Client.h"


Client::Client(std::string Nume = " ", std::string combustibil_preferat = " ", int an_minim=0, long long kilometri_max=0, double consum_max=0)
{
    this->Nume=Nume;
    this->combustibil_preferat=combustibil_preferat;
    this->an_minim=an_minim;
    this->kilometri_max=kilometri_max;
    this->consum_max=consum_max;
}
bool Client::verifica(Masina &masina) const
{
    if(masina.get_combustibil() != combustibil_preferat || an_minim>masina.get_an_fabricatie() || kilometri_max<masina.get_kilometraj() || consum_max < masina.get_consum())
        return false;
    else
        return true;

}

