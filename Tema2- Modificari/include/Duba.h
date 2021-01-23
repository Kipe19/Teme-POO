#ifndef DUBA_H
#define DUBA_H
#include "Masina.h"
class Duba : public Masina
{
private:
    int nr_locuri;
public:
    Duba(std::string, std::string, std::string, double, long long,int,int);
    bool polueaza() const;
    friend std::ostream& operator<<(std::ostream& out, const Duba& d);

};

#endif // DUBA_H
