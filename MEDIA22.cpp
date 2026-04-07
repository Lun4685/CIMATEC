#include <iostream>
using namespace std;
string aluno, situacao;
int qtd, aprovados = 0, reprovados = 0;
float nota1, nota2, nota3, mediaA, mediaT = 0, menor, maior;

int main() {
	cout << "===== SISTEMA DE NOTAS =====" << endl;
	cout << "Informe a quantidade de alunos que serão cadastrados: ";
	cin >> qtd;
	
	for (int i = 1; i <= qtd;i++) {
		cout << "--- ALUNO " << i << "---"<< endl;
		
		do {
			cout << "Nota 1: ";
			cin >> nota1;
				
			if (nota1 < 0 || nota1 > 10) {
				cout << "Nota inválida! Digite um valor entre 0 e 10: " << endl;
				cout << "Nota 1: ";
				cin >> nota1; 
			}		
		}while(nota1 < 0 || nota1 > 10);
			
			
		do{
			cout << "Nota 2: ";
			cin >> nota2;
				
			if (nota2 <0 || nota2 > 10) {
				cout << "Nota inválida! Digite um valor entre 0 e 10: " << endl;
				cout << "Nota2: ";
				cin >> nota2;
			}
		}while(nota2 < 0 || nota2 > 10);
			
		do{
			cout << "Nota 3: ";
			cin >> nota3;
				
			if (nota3 <0 || nota3 > 10) {
				cout << "Nota inválida! Digite um valor entre 0 e 10: ";
				cout << "Nota 3: ";
				cin >> nota3;
			}
		}while(nota3 < 0 || nota3 > 10);
		
		mediaA = (nota1 + nota2 + nota3) / 3;
		cout << "\nMedia do aluno: " << mediaA << endl; 
		
		if (mediaA >= 6){
			aprovados++;
			situacao = "Aprovado";
			cout << "Situação: " << situacao << endl;
		}else{
			reprovados++;
			situacao = "Reprovado";
			cout << "Situacao: " << situacao << endl;
		}
		
		
		if (i == 1) {
			maior = mediaA;
			menor = mediaA;
		}
		if (mediaA > maior) {
			maior = mediaA;
		}else if (mediaA < menor){
			menor = mediaA;
		}
					
		mediaT += mediaA;
	}
	cout << "===== RESULTADO FINAL =====" << endl;
	mediaT = mediaT / qtd;
	cout << "Média geral da teurma: " << mediaT << endl;
	cout << "Total de aprovados: "<< aprovados << endl;
	cout << "Total de reprovados: " << reprovados << endl;
	cout << "Maior média: " << maior << endl;
	cout << "Menor média: " << menor << endl;
}

