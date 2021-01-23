#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <iostream>
#include "Masina.h"
class Client
{
    std::string Nume;
    std::string combustibil_preferat;
    int an_minim;
    long long kilometri_max;
    double consum_max;
public:
    Client(std::string,std::string,int,long long,double);
    bool verifica(Masina&) const;

};

#endif // CLIENT_H
