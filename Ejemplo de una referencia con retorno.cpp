/* un referencia es un puntero que se comporta como una variable normal se
pueden pasar a una funcion, puede ser devuelta por una funcion o puede crearse 
como referencia independiente */

//utilizando una referencia devuelta 
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int &f();
int x;
main(){
	int i=0;
	f()=100;			
	cout<<"El valor de x:"<<x;
	getch();
}

int &f(){			
	return x;
}












