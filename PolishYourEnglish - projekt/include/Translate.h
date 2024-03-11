#ifndef TRANSLATE_H
#define TRANSLATE_H

#include <string>
#include <iostream>
#include <ctime>

using namespace std;

class Translator {
private:
    std::string* polishWords;
    std::string* englishWords;
    int size;
    int Liczba=0;

    string slowoUzytkownika;

public:


       int wybranykierunek;
    // Konstruktor dwuargumentowy
    Translator(std::string* polish, std::string* english, int arraySize) {
        size = arraySize;
        polishWords = new std::string[size];
        englishWords = new std::string[size];

        // Inicjalizacja tablic za pomoc¹ dostarczonych danych
        for (int i = 0; i < size; ++i) {
            polishWords[i] = polish[i];
            englishWords[i] = english[i];
        }
    }

  // Destruktor do zwalniania zaalokowanej pamieci
    ~Translator() {
        delete[] polishWords;
        delete[] englishWords;
    }


    void SetLiczba(int liczbaslowek){
        Liczba=liczbaslowek;
    }

    string GetSlowoPol(int x){
        return polishWords[x];
    }
    string GetSlowoAng(int x){
        return englishWords[x];
    }

    string Getkierunek(){
        return to_string(wybranykierunek);
    }
    void Setkierunek(int x){
        wybranykierunek=x;
    }

    //getter i setter do słowa użytkownika
     void SetSlowoUser(string slowoztextctrl){
        slowoUzytkownika=slowoztextctrl;
    }
    string GetSlowoUser(){
        return slowoUzytkownika;
    }
};

#endif // TRANSLATE_H
