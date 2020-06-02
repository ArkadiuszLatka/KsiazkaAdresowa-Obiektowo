#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;
    const string nazwaPlikuZAdresatami;
    string nazwaTymczasowegoPlikuZAdresatami;
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    void usunOdczytywanyPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazweTymczasowegoPlikuNaNazweOdczytywanegoPliku(string nazwaTymczasowegoPlikuZRozszerzeniem, string nazwaPlikuZRozszerzeniem);
    void pobierzZPlikuIdOstatniegoAdresata();
public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {};

    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    void usunWybranegoAdresataZPliku(int idAdresata,int idUsuwanegoAdresata);
    void edytujAdresataWPliku(Adresat adresat);
    void wczytajIdOstatniegoAdresata(int Id);
};


#endif //PLIKZADRESATAMI_H
