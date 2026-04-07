#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float nota1, nota2,nota3, media;
	cout <<  "Informe a primeira nota: "<< endl;
	cin >> nota1;
	cout << "Informe a segunda nota: " << endl;
	cin >> nota2;
	cout << "Informe a terceira nota: " << endl;
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if (media >= 7) {
		cout << "Aprovado";
	}
	/*elif (media >= 5 and media < 7){
		cout << "Recuperação";
	}*/
	else{
		cout << "Reprovado";
	}
}