#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	const int qtd = 10;
	int idades[qtd];
	int i;

	for (i=0;i<qtd;i++){
		cout<<"\tDIGITE A IDADE DO ESTUDANTE <"<<i+1<<"> = ";
		cin>> idades[i];
	}
	for (i=0;i<qtd;i++){
		cout<<idades[i]<<" ";
	}
	int soma=0;
	for (i=0;i<qtd;i++){
		soma=soma+idades[i];
	}
	
	cout<< "\n\t MEDIA = "<<soma/qtd<<endl;
	
	
	
	system("pause");
	return 0;
}
