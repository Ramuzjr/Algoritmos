#include <iostream>
#include <Math.h>
#include "MiBiblio.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int Potencia (int , int );

int main(int argc, char** argv) {
	int op;
	int x,y;
	char virgula;
	do{
		
	
	cout<<"*****Menu******"<<endl;
	cout<<"1.Potencia"<<endl;
	cout<<"2.Factorial"<<endl;
	cout<<"3.Numeros Primos"<<endl;
	cout<<"4.Sair"<<endl;
	cout<<"***************"<<endl;
	cout<<"Escolha sua opcao"<<endl;
	cin>>op;
	switch (op){
		case 1://Potencia
			cout<<"Insira <x,y>:";
			cin>>x>>virgula>>y;
			cout<<x<<"^"<<y<<"="<<pow(x,y);
			break;
		case 2://factorial
			cout<<"Insira o valor:";
			cin>>x;
			cout<<"!"<<x<<"="<<Factorial(x);
			break;
		case 3:
			cout<<"Insira o valor:";
			cin>>x;
			cout<<x;
			if (EPrimo(x)){
				cout<<" e primo";
			} else{
				cout<<" nao e primo";
			}
			
			break;
		case 4:
			break;
		default:
			cout<<"\a\a\a. Erro. Opcao e invalida";
						
	}
	 system("pause");
	 system("cls");
	}while (op != 4);
	return 0;
}


int Potencia (int x, int y){
	int res=1;
	for(int i=0; i<y; i=i+1){
	  res=res*x;	
	}
	return res;
}
