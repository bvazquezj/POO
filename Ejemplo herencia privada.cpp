//ejemplo de erencia publica

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class base{
	int x;
	public:
		void obtener_x(int a){
			x=a;
		}
		void muestra_x(){
			cout<<x<<"  ";		
		}
};

class derivada:private base{
	int y;
	public:
		void obtener_xy(int a, int b){
			obtener_x(a);
			y=b;
		}
		void muestra_xy(){
			muestra_x(); 
			cout<<y<<"  ";		
		}
};


main(){
	derivada obj;
	obj.obtener_xy(10,20);
	obj.muestra_xy();
	getch();
	
}        

