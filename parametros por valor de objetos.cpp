

#include<stdio.h>
#include<conio.h>
#include<iostream>


using namespace std;
class miclase{
	private:
		int a;
	public:
		miclase(int n);
		int get();
};

miclase::miclase(int x){
	a=x;
}
int miclase::get(){
	return(a);
}
int main(){
	miclase obj(200);
	miclase *p;
	p=&obj;
	cout<<"el valor del objeto es:"<<obj.get();
	cout<<"el valor del puntero es:"<<p->get();
	return 0;	
}



