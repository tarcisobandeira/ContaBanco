#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "cliente.h"
#include "conta.h"

void main(){
	setlocale(LC_ALL, "Portuguese");
    int selecao;
    char sn;
    Cliente usuario;
    Conta cont;
    cont.numConta = 0;
    
    system("color A0");
    
	do{
		system("cls");
		
		if(cont.numConta == 0){
			printf("\n ================================================");
			printf("\n BANCO FATEC BEM VINDO, ESCOLHA UMA OPERACAO ABAIXO");
			printf("\n ================================================");
		}else{
			printf("\n ================================================");
			printf("\n BANCO FATEC SEJÁ BEM VINDO %s\n ESCOLHA UMA OPERACAO ABAIXO", cont.clien_conta.nome_cliente);
			printf("\n ================================================");
		}
		printf("\n | *** MENU *** = ");
		printf("\n ----------------------------- ");
		printf("\n |(1) - CADASTRO = ");
		printf("\n ----------------------------- ");
		printf("\n |(2) - DEPÓSITO = ");
		printf("\n ----------------------------- ");
		printf("\n |(3) - SAQUE = ");
		printf("\n ----------------------------- ");
		printf("\n |(4) - CONSULTAR SALDO = ");
		printf("\n ----------------------------- ");
		printf("\n |(5) - SAIR DO SISTEMA = ");
		printf("\n ============================= ");
		scanf("%d", &selecao);
		
		switch(selecao){
			case 1:
				printf("\n Quer cadastrar uma nova conta(S/N)?");
				fflush(stdin);
				scanf("%c", &sn);
				
				if(sn == 's' || sn == 'S'){
					system("cls");
					usuario = cadastrar(usuario);
					cont.numConta = usuario.codigo;
					cont.clien_conta = usuario;
					cont.saldo = 0.00;
				}
				break;
	
			case 2:
				if(cont.numConta != 0){
					cont = depositar(cont);
				}else{
					printf("\n Você não possui uma conta.\n\n");
					system("pause");
				}
				break;
		
			case 3:
				if(cont.numConta != 0){
					if(cont.saldo > 0){
						cont = sacar(cont);
					}else{
						printf("\n Seu saldo é insuficiente.\n\n");
						system("pause");
					}
				}else{
					printf("\n Você não possui uma conta.\n\n");
					system("pause");
				}
				break;
		
			case 4:
				if(cont.numConta != 0){
					system("cls");
					consultar(cont);
				}else{
					printf("\n Você não possui uma conta.\n\n");
					system("pause");
				}
				break;
		
			case 5:
				break;
		
			default:
				printf("\n\n NÚMERO NÃO IDENTIFICADO!");
				printf("\n\n FAVOR TENTE NÚMEROS DE 1 A 5\n\n");	
				system("pause");
		}
	}while(selecao != 5);
}
