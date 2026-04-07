#include <iostream> 
using namespace std;

int main() {
	int valor;
	cout << "Informe um numero: ";
	cin >> valor;
	
	for (int i = 1;i <= 10; i++){
		cout << valor << " x " << i << " = " << valor * i << endl;
	}
}