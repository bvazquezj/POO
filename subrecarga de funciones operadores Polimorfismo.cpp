/* Sobrecarga de funciones de operadores
   Polimorfismo<
   
*/

#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int abs(int numero);
long abs(long numero);
double abs(double numero);

main(){
cout<<"valor absoluto de -10: "<<abs(-10)<<"\n";
cout<<"valor absoluto de -10L: "<<abs(-10)<<"\n";
cout<<"valor absoluto de -10-01: "<<abs(-10)<<"\n";
getch();
}

int abs(int numero){
	return numero<0? -numero:numero;
}

long abs(long numero){
	return numero<0? -numero:numero;
}

double abs(double numero){
	return numero<0? -numero:numero;
}







