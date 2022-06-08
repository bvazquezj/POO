/*herencia 
clase base --> clase derivada (quien hereda)
*/

//ejemplo para comprobar los tipos de acceso

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class miclase{
        int a;
	protected:
		int b;
	public:
		int c;
	miclase(int n,int m){
		a=n;
		b=m;
	}
	int obten_a(){
		return a;
	}
	int obten_b(){
		return b;
	}	
};


main(){
	miclase ob1(10,20);
	ob1.c=30;
	cout<<ob1.obten_a()<<"\n";
	cout<<ob1.obten_b()<<"\n";
	cout<<ob1.c;
	getch();
}
