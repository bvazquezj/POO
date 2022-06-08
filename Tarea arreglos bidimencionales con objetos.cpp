//tarea arreglo bidimencional atributo a y b
#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
class bidi{
	private:
		int a,b;
	public:
 	   bidi(){
		void mostrar(){
			 cout<<a<<" "<<b<<"  ";
		}
};
bidi::bidi(){
	cin>>a;
	cin>>b;
	a=i;
	b=k;
}
int main(){
	bidi ob[4][4];
			int i,k;
			for(i=0;i<4;i++){
					for(k=0;k<4;k++){
						ob[i][k]();
						ob[i][k].mostrar();
					}
				cout<<"\n";						
			}
	getch();
	system("pause");
	return 0;
}

