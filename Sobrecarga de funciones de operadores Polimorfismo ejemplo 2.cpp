//Sobrecarga de funciones de operadores Polimorfismo

#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void fecha(char *fecha);
void fecha(int aa,int mes,int dia);

main(){
fecha("22/04/2021");
fecha(2021,4,22);

getch();
}

void fecha(char *fecha){
	cout<<"Fecha : "<<fecha<<"\n";
}

void fecha(int aa,int mes,int dia){
	cout<<"Fecha : "<<dia<<"/"<<mes<<"/"<<aa;
}



