#include<vector>
#ifndef biblioteka
#define biblioteka
#include<iostream>
using namespace std;
class macierz
    {
    int x;
    int y;
	int **tab;
public:
    macierz(int a, int b);//konstruktor
    ~macierz();//destruktor
    macierz operator+(macierz &p);//dodaj dwie macierze (tych samych wymiarow)
    void operator+=(macierz &p);//dodaj dwie macierze i przypisz wynik do pierwszej
    macierz operator-(macierz &p);//odejmij dwie macierze( tych samych rozmiarow)
    void operator-=(macierz &p);//odejmij dwie macierze i przypisz wynik do pierwszej
    macierz operator*(macierz &p);//pomnoz dwie macierze
    void operator*=(macierz &p);//pomnoz dwie macierze i przypisz wynik pierwszej
    int operator==(macierz &p);//porownaj dwie macierze 1-takie same 0 rozne
    int operator!=(macierz &p);//porownaj dwie macierze 1-rozne 0 takie same
    void zmien(int b, int y, int x);//zmien wartosc komorki o danych wspolrzednych
    int pobierz(int y, int x);//odczytaj wartosc z komorki o danych wspolrzednych

    friend ostream& operator<<(ostream& out,macierz &p);//wypisz macierz
    friend istream& operator>>(istream& in,macierz &p);//wczytaj macierz(wiersz po wierszu od gory
    };
#endif // biblioteka
