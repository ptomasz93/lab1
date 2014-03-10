/*
 * main.c
 *
 *  Created on: 28-02-2014
 *      Author: root
 */



#include <iostream>


#include "funkcje.hh"
#include "clasa.hh"
#include <fstream>
#include <vector>

using namespace std;

fstream in;
fstream wynik;
ofstream czas;

int main()
{
	dane wejscie;
	double time;
	bool flag;
	flag=otworz("dane.txt" ,in);///otwarcie pliku z danymi wejsciowymi
	if(flag)cout<<"plik otwarty\n";
	if(flag==false)cout<<"nie udalo sie otworzyc pliku  \n";
	in>>wejscie;
	in.close();
	cout<<"wejscie:\n"<<wejscie;
	//wejscie.dodaj(3,5);
	//wejscie.Zamien_elementy(4,5);
	//int tab[]={1,2,3,4};
	//wejscie.dodaj(tab,4,4);
	//wejscie.dodaj_koniec(4);
	wejscie.dodaj_poczatek(5);
	//wejscie+wejscie.wejsciowe;
	cout<<"wynik:\n"<<wejscie;
//	dane.close();///zamkniecie pliku z danymi wejsciowymi
//	czas.open("czas.txt", ios::app|ios::out);///otwarcie pliku do przechowywania czasu
//	int* wyjsciowe=new int[rozmiar];
//	long int pow=13000000;
//		for(pow;pow<34000000;pow=pow+500000)///petla powtorzen algorytmu
//		{
//			time=obliczenia(wejsciowe,wyjsciowe,pow);
//			cout<<time<<endl;
//			czas<<wejsciowe.size()<<"   "<<pow<<"   "<<time<<"\n";
//		}
//
//	czas.close();
//	wynik.open("wynik.txt",ios::app|ios::out);
//	zapisz(wyjsciowe, wynik, rozmiar);
//	wynik.close();
//	cout<<"\n\n";

}


