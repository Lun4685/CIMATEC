#include <iostream>
using namespace std;

int main() {
	float metro, km ; 
	while (metro > 0) {
		cout << "Insira o valor em metros: " << endl;
		cin >> metro;
		
		if (metro < 0) {
			break;
		}
		
		km = metro / 1000;
		
		 cout << "São: " << km << " km" << endl;
	}
}