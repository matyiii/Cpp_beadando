#pragma once

#include "Gep.hpp"
#include <string>

using namespace std;

class Munkagep: public Gep
{
public:
    Munkagep(string gyarto, string tipus, string rendszam, double fogyasztas,int igenybevetel): Gep(gyarto,tipus,rendszam,fogyasztas,igenybevetel) {};
    Munkagep() {}
private:

};
