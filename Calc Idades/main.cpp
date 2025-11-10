#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int dataA=2023, dataN, idade, rep;
	
	do{
		system("cls");
	
		cout<<"\tDIGITE O ANO QUE VOCE NASCEU = ";
		cin>>dataN;
		
		idade=2023-dataN;
		
		cout<<"\tVoce nasceu no ano de = "<<dataN<<endl; 
		cout<<"\tA sua idade actual = "<<idade<<endl; 
	
		cout<<"Para Repetir Pressione 1:";
		cin>>rep;
	
	}while(rep==1);
	system("pause");
	
	
	return 0;
}
