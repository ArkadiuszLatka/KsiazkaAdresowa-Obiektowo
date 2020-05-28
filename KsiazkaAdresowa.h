#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H


#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
   public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) :
    uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
    adresatMenedzer = NULL;
}
    ~KsiazkaAdresowa() {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    }

    int pobierzIdZalogowanegoUzytkownika();
    bool czyUzytkownikJestZalogowany();
    void rejestracjaUzytkownika();

    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wybierzOpcjeZMenuGlownego();
    void wybierzOpcjeZMenuUzytkownika();

    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void wczytajAdresatowZPliku();
    void dodajAdresata();

    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
};
#endif
