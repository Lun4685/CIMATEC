#include <iostream>
using namespace std;

int main (int argc,char**argv){
	int num1,num2, soma, sub;
	char op;
	
	do{
		cout << "----------MENU----------" << endl;
		cout << "1 - Somar dois números" << endl;
		cout << "2 - Subtrair dois números" << endl;
		cout << "3 - Mostrar números de 1 a 5" << endl;
		cout << "4 - Sair" << endl;
		cout << "Escolha uma opção: ";
		cin >> op;
				
		if (op == '1'){
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			
			soma = num1 + num2;
			
			cout << "Resultado da soma: " << soma << endl;
			
		}else if (op == '2'){
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			
			sub = num1 - num2;
			
			cout << "Resultado da subtração: " << sub << endl;
		}else if (op == '3'){
			for (int i= 1; i <= 5; i++){
				cout << i << endl;
			}
		}
		
	}while(op != '4');
	
}           