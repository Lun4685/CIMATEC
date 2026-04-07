#include <iostream>
using namespace std;

int main () {
	double totalgeral, total_gasolina = 0, total_etanol = 0, total_diesel = 0, demandaG = 0, demandaE = 0, demandaD = 0;
	float precoG = 5.89, precoE = 4.29, precoD = 6.15, litros;
	int combustivel;
	
	while(true) {
		cout << "Selecione o tipo do combustivel\n ";
		cout << "1- Gasolina\n 2- Etanol\n 3 - Diesel\n 4- Sair\n";
		cin >> combustivel;
		
		if (combustivel == 4) {
			break;
		}
		cout << "Informe a quantidade de litros" << endl;
		cin >> litros;
		
		if (combustivel == 1) {
			total_gasolina += litros * precoG;
			demandaG += litros;
		}else if (combustivel == 2) {
			total_etanol += litros * precoE;
			demandaE += litros;
		}else if (combustivel == 3) {
			total_diesel += litros * precoD;
			demandaD += litros;
		}
			
	}
	
	totalgeral = total_gasolina + total_etanol + total_diesel;
	
	string maior_combustivel;
	double maior;
	
	if (demandaG > demandaE and demandaG > demandaD) {
		maior = demandaG;
		maior_combustivel = "Gasolina";
	}else if (demandaE > demandaG and demandaE > demandaD) {
		maior = demandaE;
		maior_combustivel = "Etanol";
	}else if (demandaD > demandaE and demandaD > demandaG) {
		maior = demandaD;
		maior_combustivel = "Diesel";
	}
	
	cout << "\n--- Relatorio Final ---\n";
    cout << "Faturamento gasolina: R$" << total_gasolina << endl;
    cout << "Faturamento etanol: R$" << total_etanol << endl;
    cout << "Faturamento diesel: R$" << total_diesel << endl;
    cout << "Combustivel com maior demanda em litros: " << maior_combustivel << endl;
    cout << "Faturamento total do posto: R$" << totalgeral << endl;
}