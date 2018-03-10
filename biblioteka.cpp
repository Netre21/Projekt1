#include<iostream>
#include<vector>
#include"biblioteka.h"
using namespace std;

macierz::macierz(int a, int b)
        {
        vector<int> tbb;
        for(int i=0;i<a;i++)
            {
            tbb.push_back(0);
            }
        for(int i=0;i<b;i++)
            {
            tab.push_back(tbb);
            }
        x=b;
        y=a;
        }
void macierz::zmien(int b, int y, int x)
    {
    tab[y][x]=b;
    }
int macierz::pobierz(int y, int x)
    {
    return tab[y][x];
    }
macierz macierz::operator+(macierz &p)
    {
    if(x!=p.x || y!=p.y)
        {
        cout<<endl<<"Blad rozne wymiary";
        macierz d(0,0);
        return d;
        }
    macierz c(y, x);
    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            c.tab[i][j]=tab[i][j]+p.tab[i][j];
            }
        }
    return c;
    }
void macierz::operator+=(macierz &p)
    {
    if(x!=p.x || y!=p.y)
        {
        cout<<endl<<"Blad rozne wymiary";
        return;
        }
    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            tab[i][j]=tab[i][j]+p.tab[i][j];
            }
        }
    return;
    }
void macierz::operator-=(macierz &p)
    {
    if(x!=p.x || y!=p.y)
        {
        cout<<endl<<"Blad rozne wymiary";
        return;
        }
    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            tab[i][j]=tab[i][j]-p.tab[i][j];
            }
        }
    return;
    }
macierz macierz::operator-(macierz &p)
    {
    if(x!=p.x || y!=p.y)
        {
        cout<<endl<<"Blad rozne wymiary";
        macierz d(0,0);
        return d;
        }
    macierz c(y, x);
    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            c.tab[i][j]=tab[i][j]-p.tab[i][j];
            }
        }
    return c;
    }
int macierz::operator==(macierz &p)
    {
    if(x!=p.x || y!=p.y)
        {
        return 0;
        }
    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            if(tab[i][j]!=p.tab[i][j])
                {
                return 0;
                }
            }
        }
    return 1;
    }
int macierz::operator!=(macierz &p)
    {
    if(x!=p.x || y!=p.y)
        {
        return 1;
        }
    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            if(tab[i][j]!=p.tab[i][j])
                {
                return 1;
                }
            }
        }
    return 0;
    }
ostream& operator<<(ostream &out, macierz &p)
    {

    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            out<<p.tab[i][j]<<" ";
            }
        out<<endl;
        }
    return out;
    }
macierz macierz::operator*(macierz &p)
    {
    if(x!=p.y)
        {
        cout<<"zle wymiary";
        macierz d(0,0);
        return d;
        }
    macierz c(y,p.x);
    int a=0;
    for(int i=0;i<y;i++)
        {
        for(int j=0;j<p.x;j++)
            {
            for(int k=0;k<x;k++)
                {
                a=a+tab[i][k]+p.tab[k][j];
                }
            c.tab[i][j]=a;
            a=0;
            }
        }
    }

void macierz::operator*=(macierz &p)
    {
    if(x!=p.y || x!=p.x)
        {
        cout<<"zle wymiary";
        return;
        }
    macierz c(y,x);
    int a=0;
    for(int i=0;i<y;i++)
        {
        for(int j=0;j<p.x;j++)
            {
            for(int k=0;k<x;k++)
                {
                a=a+tab[i][k]*p.tab[k][j];
                }
            c.tab[i][j]=a;
            a=0;
            }
        }
    *this=c;
    }
istream& operator>>(istream& in, macierz& p)
    {
    for(int i=0;i<p.x;i++)
        {
        for(int j=0;j<p.y;j++)
            {
            in>>p.tab[i][j];
            }
        }
    return in;
    }
