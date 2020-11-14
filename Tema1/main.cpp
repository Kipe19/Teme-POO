
#include <iostream>
#include <cstring>
using namespace std;
class Masina{
  std::string producator;
  std::string nr_inmatriculare;
  std::string combustibil;
  double consum;
  long long kilometraj;
  int an_fabricatie;
  public:
      Masina(std::string, std::string, std::string, double, long long,int);
      Masina(Masina&);
      void polueaza() const;
      string get_combustibil() const;
      double get_consum() const;
      long long get_kilometraj() const;
      int get_an_fabricatie() const;



};
string Masina::get_combustibil() const
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
                   std::cout<<"Masina selectata:";
                   this->producator = producator;
                   this->nr_inmatriculare= nr_inmatriculare;
                   this->combustibil= combustibil;
                   this->consum= consum;
                   this->kilometraj=kilometraj;
                   this->an_fabricatie=an_fabricatie;

                   std::cout<<"\nProducator: "<<this->producator<<"\nNumar de Inmatriculare: "
                   << this->nr_inmatriculare<< "\nTip Combustibil: "<< this->combustibil<<"\nConsum l/100km: "<<this->consum
                   <<"\nKilometraj: " << this->kilometraj<<"\nAnul Fabricatiei: "<<this->an_fabricatie<<endl;;
               }
Masina::Masina(Masina& masina)
{
                   this->producator = masina.producator;
                   this->nr_inmatriculare= masina.nr_inmatriculare;
                   this->combustibil= masina.combustibil;
                   this->consum= masina.consum;
                   this->kilometraj=masina.kilometraj;
                   this->an_fabricatie=masina.an_fabricatie;
                   std::cout<<this->producator<<" " << this->nr_inmatriculare<< " "<< this->combustibil<<" "<<this->consum<< " " << this->kilometraj<< " "<<this->an_fabricatie;
}

class Client
{
  string Nume;
  string combustibil_preferat;
  int an_minim;
  long long kilometri_max;
  double consum_max;
  public:
      Client(std::string,std::string,int,long long,double);
      void verifica(Masina&) const;

};
Client::Client(std::string Nume = " ", std::string combustibil_preferat = " ", int an_minim=0, long long kilometri_max=0 , double consum_max=0)
{
   std::cout<<"Numele si preferintele clientului: "<<endl;
    this->Nume=Nume;
    this->combustibil_preferat=combustibil_preferat;
    this->an_minim=an_minim;
    this->kilometri_max=kilometri_max;
    this->consum_max=consum_max;
}
void Client::verifica(Masina &masina) const
{
  if(masina.get_combustibil() != combustibil_preferat || an_minim>masina.get_an_fabricatie() || kilometri_max<masina.get_kilometraj() || consum_max < masina.get_consum())
           cout<<"Masina nu corespunde preferintelor clientului!"<<endl;
           else
            cout<<"Masina corespunde preferintelor clientului!"<<endl;

}

void Masina::polueaza() const
{
    std::cout<<endl<<"Oare ai voie sa mergi cu ea in Bucuresti?"<<endl;
    if(combustibil == "Diesel")
    {
        if(an_fabricatie<2009)
            std::cout<<"Masina este euro 3, o lasi la Preciziei si iei metroul."<<endl;
        else if(kilometraj>200000)
            std::cout<<"Necesita schimbare filtru de particule,nu poti circula."<<endl;
            else
            std::cout<<"Poti circula in Bucuresti"<<endl;
    }
    else{

        if(an_fabricatie<2004)
         std::cout<<"Masina este euro 3, o lasi la Preciziei si iei metroul."<<endl;
         else
            std::cout<<"Poti circula in Bucuresti."<<endl;
    }

    std::cout<<endl;


}
int main() {

    Masina a("VW","GJ69CCP","Diesel",6.5,420214,2009);
    a.polueaza();
    Masina b("Renault","GJ06GWL","Benzina",5.2,210000,2004);
    b.polueaza();

    Client c("Chipesu Ciprian","Benzina",2003,250000,7.1);
    c.verifica(a);

}

