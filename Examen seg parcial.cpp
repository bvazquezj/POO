#include<iostream>
#include<stdio.h> 
#include<conio.h>

using namespace std;

class targetadebito {
	  private:
	  float saldo;
 	public:
		float Saldo(){
  		  return saldo;
 		}
		void meter(float monto){
		 saldo+=monto;
	    }
		void sacar(float monto){
		 saldo-=monto;		 
	    }
		void disponer(float monto){
		    if (monto <=saldo){
		 	   saldo-=monto;
  			}
    	}

};

class tarjetacredito:public targetadebito{
	private:
		float cto=1000;
	public:
	void nuevo_lmtcto(float nuevo_cto){
		cto=nuevo_cto;
	}	
	void disponer(float monto){
		saldo+=cto;
		 if (monto <=saldo){
		 	   saldo-=monto;
  			}
	}
	
};

