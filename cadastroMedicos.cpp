#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 50

struct Medicos{
	char nome[70];
	char especialidade[50];
	float valorConsulta;
	char diasQueAtende[50];
	char horariosQueAtende[50];
} medico[TAM];
	
int cont = 0;

bool verificarCadastros() {
	if (cont = 0) {
		printf("Nenhum cadastro realizado até o momento!");
		return 1;
	}
	
	return 0;
}

void cadastrarMedico() {
	if(cont == TAM) {
		printf("Limite atingido! Não é possível cadastrar mais médicos.");
		return;
	}
	
	printf("\tCadastro de médico\n");
	fflush(stdin);
	printf("\nNome: ");
	gets(medico[cont].nome);
	printf("Especialidade: ");
	gets(medico[cont].especialidade);
	printf("Valor da Consulta: ");
	scanf("%f", &medico[cont].valorConsulta);
	fflush(stdin);
	printf("Dias que atende: ");
	gets(medico[cont].diasQueAtende);
	printf("Horários que atende: ");
	gets(medico[cont].horariosQueAtende);
	                  
	printf("Médico %d cadastrado com sucesso!", cont++);
}

void mostrarMedicos() {
	for(int i = 0; i < cont; i++) {
		printf("\tMédico %d\n", i);
		printf("Nome: %s\n", medico[i].nome);
		printf("Especialidade: %s\n", medico[i].especialidade);
		printf("Valor da consulta: %.2f\n", medico[i].valorConsulta);
		printf("Dias que atende: %s\n", medico[i].diasQueAtende);
		printf("Horários que atende: %s\n", medico[i].horariosQueAtende);
	}	
}

void atualizarMedico() {
	int numero;
	
	if(!verificarCadastros()) {
		printf("\tAtualizar cadastro de médico\n");
		printf("Informe o número correspondente ao cadastro que deseja atualizar: ");
		scanf("%d", &numero);
		
		for(int i = 0; i <= cont; i++) {
			if(numero == cont) {
				fflush(stdin);
				printf("\nNome: ");
				gets(medico[i].nome);
				printf("Especialidade: ");
				gets(medico[i].especialidade);
				printf("Valor da Consulta: ");
				scanf("%f", &medico[i].valorConsulta);
				fflush(stdin);
				printf("Dias que atende: ");
				gets(medico[i].diasQueAtende);
				printf("Horários que atende: ");
				gets(medico[i].horariosQueAtende);
			}                          
		}
	} else {
		printf("Médico não encontrado! Tente novamente.");
		return;
	} 
}

void controle(int escolha) {
	switch(escolha) {
		case 1:
			cadastrarMedico();
			break;
		case 2:
			atualizarMedico();
			break;
		case 3:
			mostrarMedicos();
		case 4:
			abort();
			break;
		default:
			printf("Opção inválida! Gentileza escolher novamente.");
			return;
	}
}

void menu() {
	int opcao;
	
	printf("\n1 - Cadastrar médico");
	printf("\n2 - Atualizar cadastro");
	printf("\n3 - Mostrar médicos");
	printf("\n4 - Sair");
	printf("\n\nEscolha uma opção: ");
	scanf("%d", &opcao);
	
	fflush(stdin);
	system("cls");
	
	controle(opcao);
	
	system("pause");
	system("cls");
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	while(true) {
		menu();
	}
}

