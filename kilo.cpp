#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int produto;
	float peso, valor, valortotal;
	
	do {
		
	cout << "\n===== SISTEMA SIMPLES DE VENDA =====" << endl;
	cout << "\n1. Fruta - R$ 3.50/kg \n2. Arroz - R$ 5.00/kg \n3. Feijão - R$ 8.00/kg \n4. Carne - R$ 35.00/kg" << endl;
	cout << "\nSelecione o produto (1-4): ";
	cin >> produto;
	
	switch (produto) {
		
		case 1:
			cout << "\nProduto selecionado: Fruta \nPreço: R$3.50/kg" << endl;
			valor = 3.50;
			break;
			
		case 2:
			cout << "\nProduto selecionado: Arroz \nPreço: R$5.00/kg" << endl;
			valor = 5.00;
			break;
			
			case 3:
				cout << "\nProduto selecionado: Feijão \nPreço: R$8.00/kg" << endl;
				valor = 8.00;
			break;
			
			case 4:
				cout << "\nProduto selecionado: Carne \nPreço: R$35.00/kg" << endl;
				valor = 35.00;
			break;
			
			default:	
			cout << "\nOpção Inválida. Tente novamente!" << endl;	
	}
} while (produto < 1 || produto > 4);

do {

cout << "\nInforme o peso em kg: ";
cin >> peso;

} while (peso < 1);

valortotal = peso * valor;

cout << "\nValor total por kg: R$" << valortotal << endl;
				
	return 0;
}