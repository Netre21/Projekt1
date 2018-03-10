#include<vector>
#ifndef biblioteka
#define biblioteka
#include<iostream>
using namespace std;
class macierz
    {
public:
    int x;
    int y;

    vector<vector<int>>tab;
    macierz(int a, int b);
    macierz operator+(macierz &p);
    void operator+=(macierz &p);
    macierz operator-(macierz &p);
    void operator-=(macierz &p);
    macierz operator*(macierz &p);
    void operator*=(macierz &p);
    int operator==(macierz &p);
    int operator!=(macierz &p);
    void zmien(int b, int y, int x);
    int pobierz(int y, int x);

    friend ostream& operator<<(ostream& out,macierz &p);
    friend istream& operator>>(istream& out,macierz &p);
    };
#endif // biblioteka
