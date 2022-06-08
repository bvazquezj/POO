//Argumentos implicitos
//tipo-devuelto nombre (var1=valor, valor2=valor, varN=valor)
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void funcion (int a=0,int b=0){
	cout<<"a:"<<a<<"\n"<<"b:"<<b;
}

main(){
	funcion();
	funcion(10);
	funcion(20,10);
	
	getch();
}











