
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct miclase{
	private:
		int a;
	public:
		miclase(int x){					//funciones automaticas constructor y destructor
			cout<<"llamo al constructor\n";
			a=x;
		}
		
 		~miclase(){
		   cout<<"destruyendo\n";
		   getch();
	    }

		void show();
};


void miclase::show(){
	 cout<<"el valor de a es: \n";
	 cout<<a;
}

int main(){
	miclase obj1(4);
			obj1.show();
	getch();
	system("pause");
	return 0;
}

