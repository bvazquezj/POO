/*sobrecarga de operadores
  las acciones de un operador sobrecargado se ajusten a un operador normal
  tipo-devuelto nombre_clase::operator operador(parametros){
  cuerpo
  }
  
menos . :: ? ¿ *

3 tipos de sobre carga operadores 
binarios, logicos y unarios

*logicos*
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
		int operator ==(opera obj);	
		
};

int opera::operator ==(opera obj){
	if(x==obj.x&&y==obj.y){
		return 1;
	}else{
		return 0;
	}	
}

main(){
	opera obj1(10,10),obj2(5,3);
	int x,y;
	if(obj1==obj2){
		cout<<"son iguales";
	}else{
		cout<<"son diferentes";
	}
	
	getch();
}
