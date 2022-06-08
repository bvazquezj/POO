#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class cosas{
	  int i,j;
	public:
      void obten(int a, int b){
	   	i=a;
	   	j=b;
	   }
	   int muestra(){
	   	return i*j;
	   }   
};

int main(){
	int *p_var;
	p_var = new int; //p_var = new int(9)  ----> Asignar un valor incial
	cosas *p;
	p = new cosas;
	if(!p || !p_var){
		cout<<"error de asignacion de memoria";
		exit(1);
	}
	*p_var = 1000;
	p->obten(4,5);      //manejo de datos con punteros
	cout<<"El entero en p_var es:"<<*p_var<<endl;
	cout<<"El resultado de i * j es:"<<p->muestra()<<endl;
	getch();
	return 0;
}




