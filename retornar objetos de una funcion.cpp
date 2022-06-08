//retornar objetos de una funcion



#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;
class ejemplo{
	private:
		char cadena[80];
	public:
		void mostrar(){
			cout<<cadena<<"\n";
		}
		void copiar(char *cad){
			strcpy(cadena,cad);
		}
};

ejemplo entrada(){
	char cadena[80];
	ejemplo str;
	cout<<"introduce una cadena \n";
	cin>>cadena;
	str.copiar(cadena);
	return str;
}

int main(){
	ejemplo ob;
	ob=entrada();
	ob.mostrar();
	getch();	
}
