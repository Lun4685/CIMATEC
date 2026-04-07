#include <iostream>
using namespace std;

int main () {
	int entrada = 0, saida = 0, cod;
	char tipo;
	
	cout << "============= CONTROLE DE ACESSO ==================" << endl;
	
	do {
		cout << "Informe o codigo do funcionario (0 para sair): ";
		cin >> cod;
		
		if (cod == 0) {
			break;

		}
		cout << "Tipo de registro (E - Entrada / S - Saida): "; 
		cin >> tipo;
		
		if ((tipo != 's' && tipo != 'S') && (tipo != 'E' && tipo != 'e') ) {
			cout << "Tipo invalido! Digite apenas E ou S." << endl;
		}
		
		if (tipo == 's' || tipo == 'S') {
			saida++;
		}else if (tipo == 'e' || tipo == 'E') {
			entrada++;
		}
		
		
	}while (cod != 0);
	
	cout << "================= RELATÓRIO FINAL =================" << endl;
	cout << "Total de entradas: " << entrada << endl;
	cout << "TOtal de saídas: " << saida << endl;
	return 0;
	
	
}