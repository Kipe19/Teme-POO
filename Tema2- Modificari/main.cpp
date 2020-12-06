#include <iostream>
#include <ostream>
#include <cstring>
#include "Masina.h"
#include "Client.h"
#include "Duba.h"
#include <memory>

int main()
{
    Masina a("VW","GJ69CCP","Diesel",6.5,420214,2009);
    std::cout<<a<<std::endl;
    Masina b("Renault","GJ06GWL","Benzina",5.2,210000,2004);
    Client c("Chipesu Ciprian","Benzina",2003,250000,7.1);

    if (c.verifica(a))
        std::cout<<"Masina corespunde preferintelor clientului"<<std::endl;
    else
        std::cout<<"Masina nu corespunde preferintelor clientului"<<std::endl;

    std::shared_ptr<Masina> m = std::make_shared<Duba>("VW","GJ69CCP","Diesel",6.5,420214,2009,10);

    std::shared_ptr<Duba> d = std::dynamic_pointer_cast<Duba>(m);
    std::cout<<*d<<std::endl;


    if(m->polueaza())
        std::cout<<"Duba polueaza\n";
    else
        std::cout<<"Duba nu polueaza\n";
}

