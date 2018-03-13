#include<iostream>
#include<vector>
#include"biblioteka.h"
using namespace std;

macierz::macierz(int a, int b)
        {
		tab=new int *[a];
		for(int i=0;i<a;i++)
            {
            tab[i]=new int [b];
            }
		y=a;
		x=b;
        }
void macierz::zmien(int b, int y, int x)
    {
    tab[y][x]=b;
    return;
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
    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
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
    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
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
    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
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
    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
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
    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
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
    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
            {
            if(tab[i][j]!=p.tab[i][j])
                {
                cout<<"rozne"<<endl;
                return 1;
                }
            }
        }
    cout<<"takie same"<<endl;
    return 0;
    }
ostream& operator<<(ostream &out, macierz &p)
    {

    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
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
    return c;
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
    return;
    }
istream& operator>>(istream& in, macierz& p)
    {
    for(int i=0;i<p.y;i++)
        {
        for(int j=0;j<p.x;j++)
            {
            in>>p.tab[i][j];
            }
        }
    return in;
    }
