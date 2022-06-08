/*sobrecarga de operadores
  las acciones de un operador sobrecargado se ajusten a un operador normal
  tipo-devuelto nombre_clase::operator operador(parametros){
  cuerpo
  }
  
menos . :: ? ¿ *

3 tipos de sobre carga operadores 
binarios, logicos y unarios

*Unarios*
*/


#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class opera{
	int x,y;
	public:
		opera(){
			x=0;
			y=0;
		}
		opera(int i,int j){
			x=i;
			y=j;
		}
		void obtenerxy(int &i,int &j){
			i=x;
			j=y;
		}
		opera operator ++();
};

opera opera::operator ++(){
	x++;
	y++;
}

main(){
	   opera obj1(10,7);
	   int x,y;
	   obj1++;
	   obj1.obtenerxy(x,y);
	   cout<<"valor de x: "<<x<<"\nvalor de y:"<<y;	
	getch();
}





