#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

main(){
	int *p;
	int i;
	p = new int[5];
	if(!p){
		cout<<"Error de asignacion";
		exit(1);
	}	
	for(i=0;i<5;i++){
		p[i]=i+1;
	}
	for(i=0;i<5;i++){
		cout<<"Este es el enteroen p["<<i<<"]";
		cout<<p[i]<<"\n";
	}
	delete []p;
	getch();
	return 0;
}
