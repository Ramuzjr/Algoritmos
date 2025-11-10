#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	/*OUT SAÍDA DE DADOS
	ofstream dadosS;
	
	dadosS.open("arquivos.text",ios::app);/*O iso::app permite adiconar nas coisas no arquivo sem substituir
	
	dadosS<< "Programacao em c++\n";
	
	dadosS.close();
*/	
	/*INSERT ENTRADA DE DADOS*/
	ifstream dadosE;
	string linha;
	dadosE.open("arquivos.text");
	
	if(dadosE.is_open()){
		while(getline(dadosE,linha)){
			cout<<linha<<endl;
		}
		dadosE.close();
	}else{
		cout<<"Arquivo não responde"<<endl;
	}
	
	return 0;
}
