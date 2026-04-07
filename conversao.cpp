#include <iostream>
using namespace std;

int main () {
	float cm, mm, km,metro, nmetro;
	int op;
	
	while (true) {
		cout << "Informe o valor em metro: ";
		cin >> metro;
		
		cout << "-----------------MENU--------------" << endl;
		cout << "1 - Para centimetros (cm)" << endl;
		cout << "2 - Para milimetros (mm)" << endl;
		cout << "3 - Para Quilometros (km)" << endl;
		cout << "4 - Inserir novo  valor em metros" << endl;
		cout << "0 - Encerrar" << endl;
		cin >> op;
		
		if (op == 0) {
			break;
		}
		
		
		if ( op == 1){
			cm = metro * 100;
			cout << "Resultado: " << cm << " centimetros" << endl;
		}
		else if (op == 2) {
			mm = metro * 1000;
			cout << "Resultado: " << mm << " milimetros" << endl;
		}
		else if (op == 3) {
			km = metro / 1000;
			cout << "Resultado: " << km << " km" << endl;
		}
		else if (op == 4) {;
			cout << "Insira o novo valor de metro: ";
			cin >> nmetro;
			cout << "Resultado: " << nmetro << "m" << endl;
		}
		
	}
}