//arreglo unidimencional con objetos
//tarea arreglo bidimencional atributo a y b
#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
class ejemplo{
	private:
		int a;
	public:
		void obtener(int i){
			a=i;
		}
		int mostrar(){
			 return a;
		}
};
int main(){
	ejemplo ob[4];
			int indice;
			for(indice=0;indice<4;indice++){
				ob[indice].obtener(indice);
				cout<<ob[indice].mostrar()<<"\n";
			}
	getch();
	system("pause");
	return 0;
}

