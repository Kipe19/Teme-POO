#ifndef MASINA_H
#define MASINA_H
#include <string>

class Masina
{
protected:
    std::string producator;
    std::string nr_inmatriculare;
    std::string combustibil;
    double consum;
    long long kilometraj;
    int an_fabricatie;
public:
    Masina(std::string, std::string, std::string, double, long long,int);
    Masina(Masina&);
    Masina& operator=(Masina& other);
    ~Masina();
    friend std::ostream& operator<<(std::ostream& out, const Masina& m);
    virtual bool polueaza() const;
    std::string get_combustibil() const;
    double get_consum() const;
    long long get_kilometraj() const;
    int get_an_fabricatie() const;

};

#endif // MASINA_H
