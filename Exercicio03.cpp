#include<iostream>
#include<string>
#define TAMVET 3

using namespace std;

typedef struct {
    string nome;
    int idade;
    long codSetor;
    float salario;
} Dados;

void obterDados(Dados *tmpDados);
void imprimeDados(Dados tempDados, int indice);

int main (void) {
    Dados *dados1;
    dados1 = new Dados[TAMVET];
	
	cout << "---------REGISTRO DE FUNCIONARIO------" << endl;
	for (int i = 0; i < TAMVET; i++){
		obterDados(&dados1[i]);
	}
	
	cout << "---------DADOS DOS FUNCIONARIOS--------" << endl;
	for (int i = 0; i < TAMVET; i++){
		imprimeDados(dados1[i],i);
	}
	
	delete[] dados1;
}
void obterDados(Dados *tmpDados){
	cout << "NOME: "<< endl;
	cin >> tmpDados->nome;
	cout << "IDADE: "<< endl;
	cin >> tmpDados->idade;
	cout << "CODIGO SETOR: "<< endl;
	cin >> tmpDados->codSetor;
	cout << "SALARIO: "<< endl;
	cin >> tmpDados->salario;
	cout << "--------------------------------------"<< endl;
}      

void imprimeDados (Dados tmpL, int x){
	cout << "DADOS DO FUNCIONARIO [" << x + 1 <<"]" << endl;
	cout  << "NOME: " << tmpL.nome << endl;
	cout  << "IDADE: " << tmpL.idade << " ANOS"  << endl;
	cout  << "CODIGO: " << tmpL.codSetor << endl;
	cout  << "SALARIO: R$ " << tmpL.salario << endl;
	cout << "--------------------------------------"<< endl;

}


