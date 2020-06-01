#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H



#include <iostream>
#include <vector>
#include <fstream>
#include "MetodyPomocnicze.h"
#include <cstdlib>
#include "Adresat.h"


class PlikTekstowy
{
    const string NAZWA_PLIKU;


public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {};
    string pobierzNazwePliku();
    bool czyPlikJestPusty();



};
#endif // PLIKTEKSTOWY_H
