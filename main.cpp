#include <iostream>
#include "Gep.hpp"
#include "Munkagep.hpp"
#include "Teherauto.hpp"
#include <vector>


using namespace std;

int main()
{
    int choice;

    std::vector<Gep*> gepek;

    Munkagep* mgep1 = new Munkagep("Gyarto3","Tipus3","ABC-004",12,9);
    Munkagep* mgep2 = new Munkagep("Gyarto3","Tipus3","ABC-005",20.5,23);
    Munkagep* mgep3 = new Munkagep("Gyarto4","Tipus4","ABC-006",15.4,10);

    Teherauto* tauto1 = new Teherauto("Gyarto1","Tipus1","ABC-007",9.5,4);
    Teherauto* tauto2 = new Teherauto("Gyarto2","Tipus2","ABC-008",15.6,8);
    Teherauto* tauto3 = new Teherauto("Gyarto3","Tipus3","ABC-009",13.3,7);

    gepek.push_back(mgep1);
    gepek.push_back(mgep2);
    gepek.push_back(mgep3);

    gepek.push_back(tauto1);
    gepek.push_back(tauto2);
    gepek.push_back(tauto3);

    do{
    choice = 0;
    cout << "\nFuel Tracking Menu\n";
    cout << "Please make your selection\n";
    cout << "1 - Gep Hozzaadas\n";
    cout << "2 - Havi Teljes Osszfogyasztas\n";
    cout << "3 - Havi Osszfogyasztas Gyarto-Tipus osszesitesben\n";
    cout << "4 - Havi Osszfogyasztas Rendszam Alapjan\n";
    cout << "5 - Exit\n";
    cout << "Selection: ";
    cin >> choice;

    switch(choice) {
        case 1:
            {
            cout << "Toltse ki az adatokat!\n";
            cout << "Gyarto: " << endl;
            string gyarto;
            cin >> gyarto;
            cout << "Tipus: " << endl;
            string tipus;
            cin >> tipus;
            cout << "Rendszam: " << endl;
            string rendszam;
            cin >> rendszam;
            cout << "Fogyasztas: " << endl;
            double fogyasztas;
            cin >> fogyasztas;
            cout << "Igenybevetel: " << endl;
            int igenybevetel;
            cin >> igenybevetel;
            Gep* g = new Gep(gyarto,tipus,rendszam,fogyasztas,igenybevetel);
            gepek.push_back(g);

            vector<Gep*>::iterator it = gepek.begin();
            std::advance(it,0);
            g->printInsert();
            g->writeToFile();
            break;
            }
        case 2:
            {
                cout <<"Havi Teljes Osszfogyasztas\n";
                double sum = 0;
                for(Gep* g : gepek){
                    sum = sum + g->fogyasztas();
                }
                cout << sum << "Liter" << endl;
            }
            break;
        case 3:
            {
                cout <<"Havi Osszfogyasztas Gyarto-Tipus osszesitesben\n";
                cout <<"Gyarto megagadasa: ";
                string gyartoBe;
                cin >> gyartoBe;
                cout<< "Tipus megadasa: ";
                string tipusBe;
                cin >> tipusBe;
                double sum = 0;
                for(Gep* g : gepek){
                    if(g->gyarto() == gyartoBe && g->tipus() == tipusBe){
                        sum = sum + g->fogyasztas();
                    }
                }
                cout << "Havi osszfogyasztas: " <<  sum <<endl;
            }
            break;
        case 4:
            {
            cout <<"Havi Osszfogyasztas Rendszam Alapjan\n";
            cout <<"Rendszam megadasa: " << endl;
            string plate;
            cin >> plate;
            double sum = 0;
            for(Gep* g : gepek){
                if(g->rendszam() == plate){
                    sum = sum + g->fogyasztas();
                }
            }
            cout << plate << "rendszam ossz fogyasztasa " << sum << endl;
            }
            break;
        case 5:
            cout << "Exit!";
            break;
        default:
            cout << "\nFuel Tracking Menu\n";
            cout << "Please make your selection\n";
            cout << "1 - Gep Hozzaadas\n";
            cout << "2 - Havi Teljes Osszfogyasztas\n";
            cout << "3 - Havi Osszfogyasztas Gyarto-Tipus osszesitesben\n";
            cout << "4 - Havi Osszfogyasztas Rendszam Alapjan\n";
            cout << "5 - Exit\n";
            cout << "Selection: ";
            cin >> choice;
        }
      } while(choice !=5);
    return 0;
}
