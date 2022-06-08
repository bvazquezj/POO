#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class miclase{
	  int n,d;
    public:
	   miclase(int i,int j){
		   n=i;
		   d=j;
	   }	
	   friend int factor(miclase ob);
};
int factor(miclase ob){
	if(!(ob.n%ob.d)){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	miclase ob1(10,2),ob2(3,2);
	if(factor(ob2)){
		cout<<"es factor";	
	}else{
		cout<<"no es factor";
	}
	getch();
}





