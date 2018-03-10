#include"biblioteka.h"
#include<iostream>
using namespace std;

int main()
{
macierz o(2,2);
o.zmien(2,0,0);
o.zmien(2,0,1);
o.zmien(1,1,0);
o.zmien(3,1,1);
cout<<o.pobierz(1,1)<<endl<<o.pobierz(0,1)<<endl<<o.pobierz(0,0)<<endl<<o.pobierz(1,0);
cout<<endl;

cout<<"o\n"<<o;
o*=o;
cout<<"o^2\n"<<o;
macierz k(2,3);
macierz l(3,2);
cin>>l;
cout<<l;
cout<<"y="<<k.y<<" x="<<k.x;
cin>>k;
cout<<"k\n"<<k;
k*=o;
cout<<"k\n"<<k;
k+=o;
cout<<"k\n"<<k;

}
