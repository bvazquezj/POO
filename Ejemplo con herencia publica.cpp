/*herencia 
clase base --> clase derivada (quien hereda)

formato de la clase derivada 
class nombre_derivada:acceso nombre_base{
	  cuerpo clase derivada
};

*/

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

class derivada:public base{
	int y;
	public:
		void obtener_y(int b){
			y=b;
		}
		void muestra_y(){
			cout<<y<<"  ";		
		}
};

class derivada2:public derivada{
	int z;
	public:
		void obtener_z(int c){
			z=c;
		}
		void muestra_z(){
			cout<<z<<"  ";		
		}
};

class derivada3:public derivada2{
	int w;
	public:
		void obtener_w(int d){
			w=d;
		}
		void muestra_w(){
			cout<<w<<"  ";		
		}
};

main(){
	derivada3 obj;
	obj.obtener_x(10);
	obj.obtener_y(20);
	obj.obtener_z(30);
	obj.obtener_w(40);
	
	obj.muestra_x();
	obj.muestra_y();
	obj.muestra_z();
	obj.muestra_w();
	
	getch();
	
}        





