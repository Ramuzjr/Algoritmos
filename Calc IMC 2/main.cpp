#include <iostream>
#include <Math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float dadosIMC(float Ps, float Al){
	float calc= Ps/pow(Al,2);
	return calc;
}
float Possibilit(float Al);

int main(int argc, char** argv) {
	float peso[4], altura[4], IMC[4],rep;
	
	cout.setf (ios::fixed | ios::showpoint);
    cout.precision(1);
	
	do{
		system("cls");
		for(int i=1; i<4; i++){
		cout<<i<<"- Pessoa"<<endl;
		cout<<"Digite o Valor do Peso:"<<endl;
		cin>>peso[i];
		
		cout<<"Digite o Valor da Altua:"<<endl;
		cin>>altura[i];
		cout<<"\n\n\n"<<endl;
	}
	for(int i=1; i<4; i++){
		IMC[i]=dadosIMC(peso[i], altura[i]);
	}
	system("cls");
	
	cout<<"\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n";
	cout<<"\xb3IMC \t\xb3Interpreta\t\t\xb3\n";
	cout<<"\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n";
	cout<<"\xb3" <<IMC[1] <<"\t\xb3"; Possibilit(IMC[1]);
	cout<<"\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n";
	cout<<"\xb3" <<IMC[2] <<"\t\xb3"; Possibilit(IMC[2]);
	cout<<"\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n";
	cout<<"\xb3" <<IMC[3] <<"\t\xb3"; Possibilit(IMC[3]);
	cout<<"\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n"<<endl;
	
	cout<<"Para Repetir Pressione 1:";
	cin>>rep;
	}while(rep==1);
	system("pause");
	return 0;
}

float Possibilit(float Al){
	if(Al<=18.5){
		cout<<"Abaixo do peso"<<endl;
	}else if(Al<=25){
		cout<<"Peso Ideal."<<endl;
	}else if(Al<=30){
		cout<<"Acima do Peso Normal."<<endl;
	}else if(Al<=35){
		cout<<"Obesidade Grau I."<<endl;
	}else if(Al<=40){
		cout<<"Obesidade Grau II."<<endl;
	}else{
		cout<<"Obesidade Grau III."<<endl;
	}	
}
