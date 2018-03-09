#include"biblioteka.h"
#include<iostream>
using namespace std;

int main()
{
macierz o(2,2);
o.zmien(9,0,0);
o.zmien(3,0,1);
o.zmien(4,1,0);
o.zmien(8,1,1);
cout<<o.pobierz(1,1)<<endl<<o.pobierz(0,1)<<endl<<o.pobierz(0,0)<<endl<<o.pobierz(1,0);
cout<<endl;
cout<<o.y<<" "<<o.x<<endl;
cout<<o;
o*=o;
cout<<o.y<<" "<<o.x<<endl;
cout<<o;
}
