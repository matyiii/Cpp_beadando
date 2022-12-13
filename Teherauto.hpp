#pragma once

#include "Gep.hpp"
#include <string>

using namespace std;

class Teherauto: public Gep
{
public:
    Teherauto(string gyarto, string tipus, string rendszam, double fogyasztas,int igenybevetel): Gep(gyarto,tipus,rendszam,fogyasztas,igenybevetel) {};
    Teherauto() {}
private:

};
