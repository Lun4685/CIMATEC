#include <iostream>
using namespace std;

int main() {
	int idade, qtd = 0, maior = 0, menor = 999;
	do{
		cout << "Informe a idade (0 para sair): ";
		cin >> idade;
		
		if (idade != 0) {
			if (idade > 18) {
				qtd++;
			} 
			if (idade > maior) {
				maior = idade;
			}
			else if (idade < menor) {
				menor = idade;
			}
		}	
	}while (idade != 0);
	cout << "Quantidade de pessoas maiores de idade: " << qtd << endl;
	cout << "A maior idade: " << maior << endl;
	cout << "A menor idade: " << menor << endl;
}