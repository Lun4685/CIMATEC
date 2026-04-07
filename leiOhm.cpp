#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int op;
	double V, R, I;
	do{
		cout << "-----------LEI DE OHM ------------>"<< endl;
		cout << "1 - Descobrir a tensão em volts" << endl;
		cout << "2 - Descobrir a resistência em ohms" << endl;
		cout << "3 - Descobrir a intensidade da corrente em amperes" << endl;
		cout << "4 - Sair" << endl;
		cout << "Escolha a opção: ";
		cin >> op;
		
		if (op == 1) {
			cout << "Digite o valor da resistência em Ohms: ";
			cin >> R;
			cout << "Digite o valor  da intensidade em Amperes: ";
			cin >> I;
			
			V = R * I;
			
			cout << "O valor da tensão é: " << V << "Vols" << endl; 
		}else if (op == 2){
			cout << "Digite o valor da tensão em Volts: ";
			cin >> V;
			cout << "Digite o valor  da intensidade em Amperes: ";
			cin >> I;
			
			R = V / I;
			
			cout << "O valor da resistência é: "<< R << "Ohms" << endl;
		}else if (op == 3){
			cout << "Digite o valor da tensão em Volts: ";
			cin >> V;
			cout << "Digite o valor da resistência em Ohms: ";
			cin >> R;
			
			I = V / R;
			
			cout << "O valor da intensidade é: " << I << "Amperes" << endl;
		}
	}while(op != 4);
}