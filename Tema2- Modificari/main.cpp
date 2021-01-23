/* "exceptii? cam simplă abordarea; apelează funcția `polueaza` și pentru o mașină simplă,
 eventual mai faci încă o subclasă; dacă apelezi prin pointer la clasa de bază, nu poți presupune
 ce clasă derivată e (atunci când afișezi în main că e dubă)
ping me dacă ai nevoie de ajutor (2021-01-16)" */
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
    std::cout<<"Masina a are urmatoarele specificatii: \n"<<a<<std::endl;
    Masina b("Renault","GJ06GWL","Benzina",5.2,210000,2004);
    std::cout<<"Masina b are urmatoarele specificatii: \n"<<b<<std::endl;
    Client c("Chipesu Ciprian","Benzina",2003,250000,7.1);


    std::cout<<"Incercam sa dam kilometrii inapoi la o masina ca un samsar adevarat \n";
    try{

    a.set_an_fabricatie(2019);
    a.set_kilometraj(-12412);
    }
    catch(ExceptieMasina &e)
    {
        std::cout<<e.what();
    }


    std::cout<<"verificam daca masina b corespunde preferintelor clientului: \n";
       if(c.verifica(b))

      std::cout<<"Masina corespunde preferintelor clientului \n"<<std::endl;
            else
      std::cout<<"Masina nu corespunde preferintelor clientului \n"<<std::endl;


    std::cout<<"Inregistram o duba (cu pointeri ca programatorii adev): \n";
    std::shared_ptr<Masina> m = std::make_shared<Duba>("IVECO","B22BOS","Diesel",10.5,500000,2002,10);

    std::shared_ptr<Duba> d = nullptr;


    if(std::dynamic_pointer_cast<Duba>(m))
    {
        std::shared_ptr<Duba> d = std::dynamic_pointer_cast<Duba>(m);
        std::cout<<*d<<"\n";
    }


    if(b.polueaza())
        std::cout<<"Masina b polueaza\n";
    else
        std::cout<<"Masina b nu polueaza\n";

     std::shared_ptr<Masina> x = std::make_shared<Masina>("VW","GJ69CCP","Diesel",6.5,420214,2009); // am creat o masina care sa nu fie duba

if(std::dynamic_pointer_cast<Duba>(x))         // aici scchimbam x cu d daca vrem sa verificam pentru duba d.
{
    if(x->polueaza())                          // si aici
        std::cout<<"Duba d polueaza\n";
    else
        std::cout<<"Duba d nu polueaza\n";
}
else
    std::cout<<"Nu este duba";

}

