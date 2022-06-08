/* el nombre de la funcion debe ser el mismo del nombre de la funcion precedido del caracter tilde su unica diferencia es esa 
tilde al principio del nombre se llama cuando se destruye el objeto. Los objetos se destruyen cuando termina la funcion 
Elimina o lbera la memoria */
//librerias
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class miclase{
	private:
		int a;
	public:
		miclase(); //constructor
		~miclase();//DESTRUCTOR
		void show();
};

//constructor
miclase::miclase(){
	a=100;
}

miclase::~miclase(){
	cout<<"destruyendo";
	getch();
}

void miclase::show(){
	cout<<a;
}

int main(){
	miclase obj1;
			obj1.show();
	getch();
	system("pause");
	return 0;
}






