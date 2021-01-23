#ifndef MASINA_H
#define MASINA_H
#include <string>
#include <stdexcept>
class CarBuilder;

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
    Masina();
    Masina(std::string, std::string, std::string, double, long long,int);
    Masina(Masina&);
    Masina (Masina&&);
    Masina& operator=(Masina& other);
    ~Masina();
    friend std::ostream& operator<<(std::ostream& out, const Masina& m);
    virtual bool polueaza() const;
    std::string get_combustibil() const;
    double get_consum() const;
    long long get_kilometraj() const;
    int get_an_fabricatie() const;
    void set_kilometraj(long long kilometraj);
    void set_an_fabricatie(int an_fabricatie);
    friend class CarBuilder;

};

class ExceptieMasina: public std::logic_error
{
    public:
    ExceptieMasina(std::string mesaj);
};

#endif // MASINA_H
