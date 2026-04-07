#include <iostream>
using namespace std;

int main () {
	int i, senha = 2026,senhaU,op; 
	float saldo = 0 , deposito = 0, saque = 0;
	
	cout << "===== TERMINAL BANCÁRIO =====" << endl;
	
	for (i = 0; i < 3; i++) {
		cout << "Digite a senha (4 dígitos): ";
		cin >> senhaU;
		
		if (senhaU == senha) {
			cout << "Acesso permitido" << endl;
			break;
		} 
		else{
			cout << "Senha invalida. Digite exatamente 4 digitos." << endl;
		}
	}
	if (i == 3) {
		cout << "Acesso bloqueado" << endl;
		return 0;
	}
	do{
			cout << "----------------------------------" << endl;
			cout << "1 - Depositar" << endl;
			cout << "2 - Sacar" << endl;
			cout << "3 - Extrato" << endl;
			cout << "0 - Sair" << endl;
			cout << "----------------------------------" << endl;
				
			cout << "\nEscolha uma opcao: ";
			cin >> op;
				
			switch(op) {
				case 1: 
					do{
						cout << "Informe o valor do deposito: ";
						cin >> deposito;
						if (deposito <= 0) {
							cout << "O valor do deposito deve ser maior que 0. Tente novamente" << endl;
						}
					}while (deposito <= 0);
					saldo += deposito;
					cout << "Deposito realizado com sucesso!" << endl;
				break;
					
				case 2: 
					do{
						cout << "Informe o valor do saque: ";
						cin >> saque;
						if (saque <= 0) {
							cout << "Valor do saque deve ser maior que zero" << endl;
						}else if (saque > saque){
							cout << "Saldo insuficiente." <<endl;
						}
					}while (saque <= 0 || saque > saldo);
					saldo -= saque;
					cout << "Saque realizado com sucesso" << endl;
				break;	
					
				case 3: 
					cout << "===== EXTRATO =====" << endl;	
					cout << "Saldo atual: R$" << saldo << endl;
				break;	
				
				case 0:
					cout << "Encerrando o sistema" << endl;
				break;
				
				default:
					cout << "Opção invalida";
				
			}
	}while(op != 0);
		
	return 0;
}