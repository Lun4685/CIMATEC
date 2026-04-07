#include <iostream>
using namespace std;

int main (int argc,char** argv) {
	double carro;
	float imposto, porcentagem_distribuidor;
	
	cout << "Informe o custo de fábrica: ";
	cin >> carro;
	
	imposto = carro * 0.45;
	porcentagem_distribuidor = carro *  0.28;
	
	cout << "Custo de Fábrica: "<< carro;
	cout << "\nO custo ao consumidor é de R$" << (carro + porcentagem_distribuidor )+ imposto;
	
}
