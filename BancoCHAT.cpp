#include <iostream>
using namespace std;

int main () {
    int senha = 2026, senhaU;
    int i;

    cout << "===== TERMINAL BANCÁRIO =====" << endl;

    // LOGIN
    for (i = 0; i < 3; i++) {
        cout << "Digite a senha (4 digitos): ";
        cin >> senhaU;

        if (senha == senhaU) {
            break; // saiu porque acertou
        } else {
            cout << "Senha inválida!" << endl;
        }
    }

    // VERIFICA SE BLOQUEOU
    if (i == 3) {
        cout << "Acesso bloqueado!" << endl;
        return 0;
    }

    // MENU
    int opcao;
    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1 - Ver saldo" << endl;
        cout << "2 - Sacar" << endl;
        cout << "3 - Depositar" << endl;
        cout << "4 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Saldo: R$1000" << endl;
                break;
            case 2:
                cout << "Saque realizado!" << endl;
                break;
            case 3:
                cout << "Depósito realizado!" << endl;
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }

    } while (opcao != 4);

    return 0;
}