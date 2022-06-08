/*funciones en linea y automaticas
la ventaja de las funciones insertadas es una rapida ejecucion mas rapida que una normal. Para declararla solo
hay que proceder con un indicador inline la ventaha es que las funciones van a estar adentro insertada en el objeto
(clase) para mantenerla siempre en linea agregaremos un prefijo para hacer que la funcion este en linea*/

//ejemplo fumciones inline
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;
inline int valor(int x){ //inline recibe un entero, se llama valor 
	return !(x%2);
}

main(){
	int a;
	cout<<"introduce un valor\n";
	cin>>a;
	if(valor(a)){
		cout<<"es par\n";
	}else{
		cout<<"es impar\n";
	}
	getch();
	return 0;
}




