#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

class stock{
	  char item[20];
	  double coste;
	public:
	  stock(char *i,double c){
	  	strcpy(item,i);
	  	coste=c;
	  }
	  void muestra();	
};

void stock::muestra(){
	cout<<item<<"pvp"<<coste;
}

int main(){
	stock ob1("tuerca",5.90);
	ob1.muestra();
	
	getch();
}









