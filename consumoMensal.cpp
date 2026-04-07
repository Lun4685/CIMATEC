#include <iostream>
using namespace std;

int main () {
	float faixa_consumo, consumo_mensal, tarifab, tarifa, dtarifa;
	
	cout << "Informe o consumo mensal: ";
	cin >> consumo_mensal;
	
	if (consumo_mensal == 0) {
		cout << "O consumo mensal não pode ser igual a 0";
	}
	
	if (consumo_mensal <= 100) {	
		faixa_consumo = consumo_mensal * 0.4;
		cout << "O valor da  faixa de consumo é: R$" << faixa_consumo;	 
	}
	
	else if (consumo_mensal <= 300) {
		dtarifa = consumo_mensal - 100;
		tarifa = dtarifa * 0.65;
		tarifab = 100 * 0.4;
		faixa_consumo = tarifab + tarifa;
		cout << "O valor da faixa de consumo é: R$" << faixa_consumo;
	}
	
	else if (consumo_mensal > 300) {
		dtarifa = consumo_mensal - 100;
		tarifa = dtarifa * 0.9;
		tarifab = 100 * 0.4;
		faixa_consumo = tarifab + tarifa);
		cout << "O valor da faixa de consumo é: R$" << faixa_consumo;
	}
}