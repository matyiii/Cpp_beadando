#pragma once
#ifndef _GEP_HPP_
#define _GEP_HPP_

#include <string>

using namespace std;

class Gep
{
public:
    Gep(string gyarto, string tipus, string rendszam, double fogyasztas,int igenybevetel): gyarto_m(gyarto), tipus_m(tipus), rendszam_m(rendszam), fogyasztas_m(fogyasztas), igenybevetel_m(igenybevetel) {};
    Gep() {}
    void setGyarto(string gyarto) {gyarto_m = gyarto;}
    void setTipus(string tipus) {tipus_m = tipus;}
    void setRendszam(string rendszam) {rendszam_m = rendszam;}
    void setFogyasztas(double fogyasztas) {fogyasztas_m = fogyasztas;}
    void setIgenybevetel(int igenybevetel) {igenybevetel_m = igenybevetel;}

    string gyarto() {return gyarto_m;}
    string tipus() {return tipus_m;}
    string rendszam() {return rendszam_m;}
    double fogyasztas() {return fogyasztas_m;}
    int igenybevetel() {return igenybevetel_m;}

    void printInsert();
    void writeToFile();
private:
    string gyarto_m;
    string tipus_m;
    string rendszam_m;
    double fogyasztas_m;
    int igenybevetel_m;
};
#endif // _GEP_HPP_


