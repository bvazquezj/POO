/* Operaciones con objetos 
silacion se puede asignar de un objeto a otro cuando sean del mismo tpo
		 objeto_destino=objeto_origen
*/
#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
class miclase{
	private:
		int a,b;
	public:
		void obtener(int i, int j){
			a=i;
			b=j;
		}
		void mostrar(){
			 cout<<a<<"   "<<b<<"\n";
		}
};
int main(){
	miclase ob1,ob2;
			ob1.obtener(10,4);
			ob2=ob1;
			ob1.mostrar();
			ob2.mostrar();
	getch();
	system("pause");
	return 0;
}

