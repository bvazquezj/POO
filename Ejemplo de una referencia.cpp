/* un referencia es un puntero que se comporta como una variable normal se
pueden pasar a una funcion, puede ser devuelta por una funcion o puede crearse 
como referencia independiente */

//utilizando una referencia
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void f(int &n);

main(){
	int i=0;
	f(i);			
	cout<<"valor de i:"<<i;
	getch();
}

void f(int &n){			//asigna valor de 100 al puntero
	n=100;
}







