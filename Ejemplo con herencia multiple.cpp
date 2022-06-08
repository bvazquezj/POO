/* Herencia multiple 

para construir la derivada mediante varias clases base

class derivada acceso base1, base2, baseN{
	  cuerpo base
};

  class derivada1:acceso base{
	  cuerpo 
   };

  	  class derivada2:acceso derivada1{
           cuerpo
      };
*/
      
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class base_a{
	int a;
	public:
		base_a(int x){
		a=x;
		}
		int ver_a(){
			return a;
		}
};

class derivada_b:public base_a{
	int b;
	public:
		derivada_b(int x,int y):base_a(x){			//se conectan constructores con ":"
			b=y;
		}
		int ver_b(){
			return b;
		}
};

class derivada_c:private derivada_b{
	int c;
	public:
		derivada_c(int x, int y,int z):derivada_b(x,y){
			c=z;
		}
		void ver_todo(){
			cout<<ver_a()<<" "<<ver_b()<<" "<<c;		
		}
};


main(){
	derivada_c obj(1,2,3);
	obj.ver_todo();
	cout<<obj.ver_a()<<"  "<<obj.ver_b();
	getch();
	
}        













