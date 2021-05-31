#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "conta.h"

Conta depositar(Conta con){
	int i = 0;
	float f;
	do{
		system("cls");
		if(i >= 1){
			printf("\n Você não pode depósitar um valor menor ou igual que zero.\n Favor colocar um valor maior.\n\n");
			system("pause");
			system("cls");
		}
		printf("\n ================================================");
		printf("\n \t\t  BANCO FATEC");
		printf("\n ================================================");
		printf("\n Depósito\n\n");
		printf ("Digite a quantia a ser depositado: R$ ");
		scanf("%f", &f);
		i++;
	}while(f<=0);
	
	con.saldo = (float) con.saldo + f;
	
	printf ("\n DEPÓSITO CONCLUÍDO COM SUCESSO\n\n");
	system("pause");
	return con;
}

Conta sacar(Conta con){
	int i = 0;
	float f;
	do{
		system("cls");
		if(i >= 1){
			printf("\n Você não pode sacar um valor maior que da sua conta.\n Favor colocar um valor maior.\n\n");
			system("pause");
			system("cls");
		}
		printf("\n ================================================");
		printf("\n \t\t  BANCO FATEC");
		printf("\n ================================================");
		printf("\n Saque\n\n");
		printf ("Digite a quantia do saque: R$ ");
		scanf("%f", &f);
		i++;
	}while(f>con.saldo);
	
	con.saldo = (float)con.saldo - f;
	
	printf("\n SAQUE CONCLUÍDO COM SUCESSO\n\n");
	system("pause");
	
	return con;
}

void consultar(Conta con){
	printf("\n ================================================");
	printf("\n \t\t  BANCO FATEC");
	printf("\n ================================================");
	printf("\n NÚMERO DA CONTA: %d", con.numConta);
	printf("\n NOME DO USUÁRIO: %s", con.clien_conta.nome_cliente);
	printf("\n\n SALDO EM CONTA : %.2f\n\n", con.saldo);
	
	system("PAUSE");
}

