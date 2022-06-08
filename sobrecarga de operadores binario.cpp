/*sobrecarga de operadores
  las acciones de un operador sobrecargado se ajusten a un operador normal
  tipo-devuelto nombre_clase::operator operador(parametros){
  cuerpo
  }
  
menos . :: ? ¿ *

3 tipos de sobre carga operadores 
binarios, logicos y unarios

*binarios*
*/


#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class opera{
	int x,y;
	public:
		opera (){
			x=0;
			y=0;
		}
		opera(int i,int j){
			x=i;
			y=j;
		}
		void obtenxy(int &i,int &j){
			i=x;
			j=y;
		}
		opera operator + (opera obj);	
		
};

opera opera::operator +(opera obj){
	opera temp;
	temp.x=x+obj.x;
	temp.y=y+obj.y;
}

main(){
	opera obj1(10,10),obj2(5,3),obj3;
	int x,y;
	
	obj3=obj1+obj2;
	obj3.obtenxy(x,y);

	cout<<"suma obj1 + obj2 \n"<< "valor x: "<<x<<"\n valor de y: "<<y;
	getch();
}
