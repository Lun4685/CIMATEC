#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int opcao, pagamento, senha;
		
	do {
		cout << "\n===== MAQUINA DE BEBIDAS =====" << endl;
		cout << "\nProdutos disponíveis: \n1. Coca-Cola - R$ 5.00 \n2. Guaraná - R$ 4.50 \n3. Suco de Uva - R$ 6.00 \n4. Água sem gás - R$ 2.50" << endl;
		cout << "\nEscolha uma opção (1-4): ";
		cin >> opcao; 
	
		switch (opcao) {
		
			case 1:
			cout << "\nVocê escolheu: Coca-Cola (R$ 5.00)" << endl;
			break;
			
			case 2:
			cout << "\nVocê escolheu: Guaraná (R$ 4.50)" << endl;
			break;
			
			case 3:
			cout << "\nVocê escolheu: Suco de Uva (R$ 6.00)" << endl;
			break;
			
			case 4:
			cout << "\nÁgua sem gás (R$ 2.50)" << endl;
			break;
			
			default:
			cout << "\nOpção Inválida. Tente novamente!" << endl;
		}
	} while (opcao < 1 || opcao > 4);
			
	do {
		cout << "\n--- FORMA DE PAGAMENTO ---" << endl;
		cout << "\n1. Cartão \n2. Pix \nEscolha (1 ou 2): ";
		cin >> pagamento;
		
		switch (pagamento) {
				
			case 1:
				cout << "\n[CARTÃO selecionado]";
				do {
					cout << "\nDigite sua senha de 4 números inteiros: ";
					cin >> senha;

					while (senha < 1000 || senha > 9999) {
						cout << "Senha inválida! Digite exatamente 4 números inteiros: ";
						cin >> senha;
					}

				} while (senha < 1000 || senha > 9999);

				cout << "\nSenha aceita. Processando pagamento..." << endl;
				cout << "\nPagamento no Cartão confirmado!" << endl;
				break;
				
			case 2:	
				cout << "\n[PIX selecionado]";
				do {
					cout << "\nDigite sua senha de 4 números inteiros: ";
					cin >> senha;

					while (senha < 1000 || senha > 9999) {
						cout << "\nSenha inválida! Digite exatamente 4 números inteiros: ";
						cin >> senha;
					}

				} while (senha < 1000 || senha > 9999);

				cout << "\nSenha aceita. Processando pagamento..." << endl;
				cout << "\nPagamento no Pix confirmado!" << endl;
				break;
				
			default:
				cout << "\nOpção invalida! Este sistema aceita apenas Cartão ou Pix." << endl;
		}
		
	} while (pagamento < 1 || pagamento > 2);
				
	return 0;
}