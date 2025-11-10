#include <iostream>
#include <string>
#include <array>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int op;
	
	do{
		system("cls");
		cout<<"++++++SOPA DE LETRAS++++++"<<endl;
		char sopa[7][14] = {
		    'A', 'F', 'M', 'A', 'R', 'Y', 'A','A', 'N', 'Q', 'A', 'Z', 'B', 'A',
		    'R', 'P', 'Y', 'P', 'W', 'P', 'L','A', 'N', 'Q', 'A', 'Z', 'B', 'A',
		    'T', 'S', 'C', 'O', 'L', 'A', 'Z','A', 'P', 'O', 'S', 'O', 'P', 'A',
		    'E', 'P', 'O', 'S', 'A', 'M', 'O','R', 'A', 'R', 'V', 'O', 'R', 'E',
		    'R', 'T', 'O', 'O', 'O', 'I', 'U','R', 'T', 'O', 'O', 'O', 'I', 'U',
		    'F', 'P', 'U', 'P', 'V', 'P', 'C','A', 'N', 'Q', 'A', 'Z', 'B', 'A',
		    'A', 'N', 'Q', 'A', 'Z', 'B', 'A','R', 'T', 'O', 'O', 'O', 'I', 'U'
		};
		string palabrabus = "";
		string palabraTmp = "";
	 
	    int rows=sizeof(sopa)/sizeof(*sopa);
	    for(int i=0; i<rows; i++){
	        int cols=sizeof(sopa[i])/sizeof(*sopa[i]);
	        for(int j=0; j<cols; j++){
	            cout<<sopa[i][j];
	        }
	        cout<<endl;
	    }
	    cout<<endl;
	    cout<<"Insira a palavra que pretendes buscar: ";
	    cin>>palabrabus;
	 
	    int len = palabrabus.length()-1;
	    for(int i=0; i<rows; i++){
	        int cols=sizeof(sopa[i])/sizeof(*sopa[i]);
	        for(int j=0; j<cols; j++){
	            if(j+len<cols){
	                palabraTmp="";
	                for(int k=0; k<=len; k++){
	                    palabraTmp+=sopa[i][j+k];
	                }
	                if(palabraTmp==palabrabus){
	                    cout<<"Sua Posicao e ["<<i<<","<<j<<"] "<<endl;
	                }
	            }
	        }
	    }
	    if(palabraTmp==palabrabus){
	    	cout<<"Encontrado Na Sopa"<<endl;
		}else{
	    	cout<<"Nao encontrada em nenhuma posicao na sopa"<<endl;
		}
		
	cout<<"Digite 1 para tentar novamente: ";
	cin>>op;
	
	}while(op==1);
	
	
	
	
	
	return 0;
}
