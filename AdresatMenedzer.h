#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    PlikZAdresatami plikZAdresatami;
    const int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);




public:
  AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami), idZalogowanegoUzytkownika(idZalogowanegoUzytkownika) {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };
    void dodajAdresata();
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int podajIdWybranegoAdresata();
    int usunAdresata();
    void edytujAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneEdytowanegoAdresata(Adresat adresat);


};
#endif
