#include <iostream>
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
      ~Masina();
      void polueaza() const;
      string get_combustibil();
  

};
  
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
Masina::~Masina()
{
    std::cout<<endl<<"Drumuri bune, colegu!\n";
}
string Masina::get_combustibil()
{
  return combustibil;
}
class Client
{
  string Nume;
  string combustibil_preferat;
}
void Client::verifica(Masina &masina)
{       
  if(masina.get_combustibil()!=combustibil_preferat)
           return false;
  else if(
     
   
void Masina::polueaza() const
{
    std::cout<<endl<<"Oare ai voie sa mergi cu ea in Bucuresti?"<<endl;
    if(combustibil == "Diesel")
    {
        if(an_fabricatie<2009)
            cout<<"Masina este euro 3, o lasi la Preciziei si iei metroul."<<endl;
        else if(kilometraj>200000)
            cout<<"Necesita schimbare filtru de particule,nu poti circula."<<endl;
            else
            cout<<"Poti circula in Bucuresti"<<endl;
    }
    else{

        if(an_fabricatie<2004)
         cout<<"Masina este euro 3, o lasi la Preciziei si iei metroul."<<endl;
         else
            cout<<"Poti circula in Bucuresti."<<endl;
    }

    cout<<endl;


}
int main() {

    Masina a("VW","GJ69CCP","Diesel",6.5,420214,2009);
    a.polueaza();
    Masina b("Renault","GJ06GWL","Benzina",5.2,210000,2004);
    b.polueaza();

}
