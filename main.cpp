#include"biblioteka.h"
#include<iostream>
using namespace std;

int main()
{
int a,b,c,d;
cout<<"wczytaj wymiary pierwszej macierz najpierw wysokosc, później dlugosc\n";
cin>>a>>b;
cout<<"wczytaj wymiary drugiej macierz najpierw wysokosc, później dlugosc\n";
cin>>c>>d;
macierz ex1(a,b);
macierz ex2(c,d);
cout<<"wczytaj zawartość pierwszej macierzy (wierszami)\n";
cin>>ex1;
cout<<ex1;
cout<<"wczytaj zawartość drugiej macierzy (wierszami)\n";
cin>>ex2;
cout<<ex2;
cout<<"1. dodaj macierze\n2. dodaj macierze i wartosc wpisz do pierwszej\n";
cout<<"3. odejmij macierze\n4. odejmij macierze i wartosc wpisz do pierwszej\n";
cout<<"5. pomnoz macierze\n6. pomnoz macierze i wartosc wpisz do pierwszej\n";
cout<<"7. porownaj macierze czy sa takie same\n8. porownaj czy sa rozne macierze\n";
cout<<"9. pobierz element o danych wspolrzednych\n10. zmien element o danych wspolrzednych\n";
cout<<"11. wypisz obie macierze\n";
cout<<"wybierz numer\n";

int licznik;
while(1){
cin>>licznik;
switch(licznik)
	{
	case 1:
	{
		macierz ex3(a,b);
		ex3=ex1+ex2;
		cout<<ex3<<endl;
	}
	break;

	case 2:
	{
		ex1+=ex2;
		cout<<ex1;
	}
	break;

	case 3:
	{
		macierz ex4(a,b);
		ex4=ex1-ex2;
		cout<<ex4<<endl;
	}
	break;

	case 4:
	{
		ex1-=ex2;
		cout<<ex1;
	}
	break;

	case 5:
	{
		macierz ex5(a,d);
		ex5=ex1*ex2;
		cout<<ex5<<endl;
	}
	break;

	case 6:
	{
		ex1*=ex2;
		cout<<ex1;
	}
	break;

	case 7:
	{
		if(ex1==ex2)
            {
            cout<<"takie same\n";
            }
        else
            {
            cout<<"sa rozne\n";
            }
	}
	break;

	case 8:
	{
	if(ex1!=ex2)
            {
            cout<<"sa rozne\n";
            }
        else
            {
            cout<<"takie same\n";
            }
	}
	break;

	case 9:
	{
		cout<<"podaj wspolrzedne";
		int k,l;
		cin>>k>>l;
		cout<<ex1.pobierz(k,l);

	}
	break;

	case 10:
	{
		cout<<"podaj wspolrzedne";
		int n,m,h;
		cin>>n>>m>>h;;
		ex1.zmien(h,n,m);

	}
	break;
	case 11:
	{
		cout<<ex1<<endl<<ex2;
	}
	}
cout<<"1. dodaj macierze\n2. dodaj macierze i wartosc wpisz do pierwszej\n";
cout<<"3. odejmij macierze\n4. odejmij macierze i wartosc wpisz do pierwszej\n";
cout<<"5. pomnoz macierze\n6. pomnoz macierze i wartosc wpisz do pierwszej\n";
cout<<"7. porownaj macierze czy sa takie same\n8. porownaj czy sa rozne macierze\n";
cout<<"9. pobierz element o danych wspolrzednych\n10. zmien element o danych wspolrzednych\n";
cout<<"11. wypisz obie macierze\n";
}
}

