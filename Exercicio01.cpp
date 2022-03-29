#include<iostream>
#include<string>

using namespace std;

typedef struct {
    int dia;
    string mes;
    int ano;
} Data;

int main (void) {
    Data data1, data2;
		cout << "-----------Informe o primeiro aniversario:----------"<< endl;
		
        cout << "Digite o dia: "<< endl;
        cin >> data1.dia;
        cout << "Digite o mes: "<< endl;
        cin >> data1.mes;
        cout << "Digite o ano: "<< endl;
        cin >> data1.ano;
        
	 	cout << "-----------Informe o segundo aniversario:----------"<< endl;
		 	
	 	cout << "Digite o dia: "<< endl;
        cin >> data2.dia;
        cout << "Digite o mes: "<< endl;
        cin >> data2.mes;
        cout << "Digite o ano: "<< endl;
        cin >> data2.ano;
	 	
	 	cout << "--------------------------------------------------"<< endl;
    
    	cout << "DATA DO PRIMEIRO ANIVERSARIO: " << data1.dia << "/" << data1.mes << "/" << data1.ano<< endl;	
    	
		cout << "DATA DO SEGUNDO ANIVERSARIO: " << data2.dia << "/" << data2.mes << "/" << data2.ano<< endl;
	 return 0;
}

