#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class miclase{
	private:
		int a;
	public:
		miclase(int x); //constructor con variable
		~miclase();//DESTRUCTOR
		void show();
};

//constructor
miclase::miclase(int x){
	cout<<"llamo al constructor";
	a=x;
}

miclase::~miclase(){
	cout<<"destruyendo";
	getch();
}

void miclase::show(){
	 cout<<"el valor de a es: ";
	 cout<<a;
}

int main(){
	miclase obj1(4);
			obj1.show();
	getch();
	system("pause");
	return 0;
}

