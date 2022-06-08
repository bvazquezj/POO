/* constructor se llama automaticamente inicializa los atributos de una clase */
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
		void show();
};
//constructor
miclase::miclase(){
	a=100;
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

