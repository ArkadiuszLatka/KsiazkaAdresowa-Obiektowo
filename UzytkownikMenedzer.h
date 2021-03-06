#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H



#include <iostream>
#include <vector>
#include<windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include  "MetodyPomocnicze.h"
using namespace std;

class UzytkownikMenedzer
{
    PlikZUzytkownikami plikZUzytkownikami;
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;


    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin( string login);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);



public:
     UzytkownikMenedzer(string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami)
     {
        idZalogowanegoUzytkownika = 0;
        wczytajUzytkownikowZPliku();
     };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    Uzytkownik podajDaneNowegoUzytkownika();
    void wczytajUzytkownikowZPliku();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();


    bool czyUzytkownikJestZalogowany();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int liczba);

};
#endif // UZYTKOWNIKMENEDZER_H
