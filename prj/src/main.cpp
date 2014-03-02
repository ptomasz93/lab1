/*
 * main.c
 *
 *  Created on: 28-02-2014
 *      Author: root
 */



#include <iostream>


#include "funkcje.hh"
#include <fstream>
#include <vector>

using namespace std;

fstream dane;
fstream wynik;
ofstream czas;

int main()
{
	double time;
	int rozmiar;
	vector <int> wejsciowe;//wektor danych wejsciowych
	bool flag;
	flag=otworz("dane.txt" ,dane);///otwarcie pliku z danymi wejsciowymi

	if(flag)cout<<"plik otwarty\n";
	if(flag==false)cout<<"nie udalo sie otworzyc pliku  \n";
	dane>>rozmiar;
	kopiuj(wejsciowe, dane, rozmiar);//kopiowanie pliku do wektora
	dane.close();///zamkniecie pliku z danymi wejsciowymi
	czas.open("czas.txt", ios::app|ios::out);///otwarcie pliku do przechowywania czasu
	int* wyjsciowe=new int[rozmiar];
	long int pow=13000000;
		for(pow;pow<34000000;pow=pow+500000)///petla powtorzen algorytmu
		{
			time=obliczenia(wejsciowe,wyjsciowe,pow);
			cout<<time<<endl;
			czas<<wejsciowe.size()<<"   "<<pow<<"   "<<time<<"\n";
		}

	czas.close();
	wynik.open("wynik.txt",ios::app|ios::out);
	zapisz(wyjsciowe, wynik, rozmiar);
	wynik.close();
	cout<<"\n\n";

}


