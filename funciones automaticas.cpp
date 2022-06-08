/*funciones automaticas no es necesaria la palabra inline se usan principalmente en funciones constructoras esta va
dentro de una clase*/

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class miclase{
	private:
		int a;
	public:
		miclase(int x){					//funciones automaticas constructor y destructor
			cout<<"llamo al constructor";
			a=x;
		}
		
 		~miclase(){
		   cout<<"destruyendo";
		   getch();
	    }

		void show();
};


void miclase::show(){
	 cout<<"el valor de a es: ";
	 cout<<a;
}

int main(){
	miclase obj1(4);
			obj1.show();
	getch();
	system("pause");
	return 0;
}

