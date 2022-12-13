#include "Gep.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Gep::printInsert()
{
    cout << "Sikeres insert " << gyarto_m << " " << tipus_m << " " << rendszam_m << " " << fogyasztas_m << " " << igenybevetel_m << endl;
}

void Gep::writeToFile()
{
    ofstream Adatok("adatok.txt", std::ios::in | std::ios::out | std::ios::app);
    Adatok << gyarto_m << " " << tipus_m << " " << rendszam_m << " " << fogyasztas_m << " " << igenybevetel_m << endl;
    Adatok.close();
}
