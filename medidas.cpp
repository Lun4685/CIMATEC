#include <iostream> 
using namespace std;

int main () {
	float medida;
	int ouro = 0, qtd = 0;
	
	while (true) {
		cout << "Digite a medida (ou 0 para sair)" << endl;
		cin >> medida;
		
		if (medida == 0) {
			break;
		}
		
		qtd++; 
		
		if (medida != 0 and medida < 10) {
			cout << "Classificação: Refugo" << endl;
		}
		else if (medida >= 10 and medida <= 15) {
			if (medida == 12.5) {
				ouro++;
				cout << "Classificação: Padrão ouro" << endl;	
			}else{
				cout << "Classificação: Padrão Prata" << endl;
			}
			
		}
		else if ( medida > 15){
			cout <<"Classificação: Para Ajuste" << endl;
		}
	}
	cout << "Total de peças analisadas: " << qtd << endl;
	cout << "Total de Peças Ouro: " << ouro << endl;
	
}