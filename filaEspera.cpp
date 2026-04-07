#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int prioridade;
	string paciente;
	char pacienteN;
	
	cout << "===========================================" << endl;
	cout << "     SISTEMA DE FILA - CLÍNICA MÉDICA     " << endl;
	cout << "===========================================" << endl;
	
		cout << "Nome do paciente: ";
		getline(cin,paciente);
		
	do{
		cout << "NIVEIS DE PRIORIDADE" << endl;
		cout << "1. Urgência" << endl;
		cout << "2. Preferencial" << endl;
		cout << "3. Normal" << endl;
		
		cout << "Selecione a prioridade (1-3): ";
		cin >> prioridade;
		 
		switch (prioridade) {
			case 1: 
				cout << "-------------------------------------------" << endl;
				cout << "            REGISTRO CONFIRMADO            " << endl;
				cout << "-------------------------------------------" << endl;
				
				cout << "Paciente: " << paciente << endl;
				cout << "Prioridade: Urgência" << endl;
				cout << "Tempo estimado: Atendimento imediato" << endl;
			break;
			
			case 2:
				cout << "-------------------------------------------" << endl;
				cout << "            REGISTRO CONFIRMADO            " << endl;
				cout << "-------------------------------------------" << endl;
				
				cout << "Paciente: " << paciente << endl;
				cout << "Prioridade: Preferencial" <<endl;
				cout << "Tempo estimado: 15 a 30 minutos" << endl;
			break;
			
			case 3:
				cout << "-------------------------------------------" << endl;
				cout << "            REGISTRO CONFIRMADO            " << endl;
				cout << "-------------------------------------------" << endl;
				
				cout << "Paciente: " << paciente << endl;
				cout << "Prioridade: Normal" << endl;
				cout << "Tempo estimado: 45 a 60 minutos" << endl;
			break;
			
			default:
				cout << "Opção invalida! Tente novamente" << endl;
		}
	}while (prioridade < 1 || prioridade > 3 );
	
	cout << "Deseja registrar um novo paciente? (S/N)" << endl;
	cin >> pacienteN;
	
	switch (pacienteN) {
		case 'S':
		case 's':
			
	
	
	do{
		for (int i = 2; i < 20;i++){
			cout << "--- NOVO ATENDIMENTO (" << i << "/20) ---" << endl;
			cout << "Nome do Paciente: " ;
			cin.ignore();
			getline(cin,paciente);
			
			do{
				
				cout << "NIVEIS DE PRIORIDADE" << endl;
				cout << "1. Urgência" << endl;
				cout << "2. Preferencial" << endl;
				cout << "3. Normal" << endl;
				
				cout << "Selecione a prioridade (1-3): ";
				cin >> prioridade;
				 
				switch (prioridade) {
					case 1: 
						cout << "-------------------------------------------" << endl;
						cout << "            REGISTRO CONFIRMADO            " << endl;
						cout << "-------------------------------------------" << endl;
						
						cout << "Paciente: " << paciente << endl;
						cout << "Prioridade: Urgência" << endl;
						cout << "Tempo estimado: Atendimento imediato" << endl;
					break;
					
					case 2:
						cout << "-------------------------------------------" << endl;
						cout << "            REGISTRO CONFIRMADO            " << endl;
						cout << "-------------------------------------------" << endl;
						
						cout << "Paciente: " << paciente << endl;
						cout << "Prioridade: Preferencial" <<endl;
						cout << "Tempo estimado: 15 a 30 minutos" << endl;
					break;
					
					case 3:
						cout << "-------------------------------------------" << endl;
						cout << "            REGISTRO CONFIRMADO            " << endl;
						cout << "-------------------------------------------" << endl;
						
						cout << "Paciente: " << paciente << endl;
						cout << "Prioridade: Normal" << endl;
						cout << "Tempo estimado: 45 a 60 minutos" << endl;
					break;
					
					default:
						cout << "Opção invalida! Tente novamente" << endl;
				}
			}while (prioridade < 1 || prioridade > 3);
			cout << "Deseja registrar um novo paciente? (S/N)" << endl ;
			cin >> pacienteN;
			
			if (pacienteN == 'n' || pacienteN == 'N') {
				cout << "Encerrando sistema" << endl;
				return 0;
			}
		}
			
	}while (pacienteN == 'S' || pacienteN == 's');
	break;
	
	case 'N':
	case 'n':
	cout << "Encerrando o sitema";
	break;
	}
	
	return 0;
}