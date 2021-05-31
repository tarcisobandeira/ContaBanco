#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "conta.h"

Cliente cadastrar(Cliente cli) {
	printf("\n ================================================");
	printf("\n \t\t  BANCO FATEC");
	printf("\n ================================================");
	printf("\n Cadastro de Clientes:\n\n");

	printf(" Entre com o nome do cliente: ");
	fflush(stdin);
	fgets(cli.nome_cliente, 50, stdin);

	printf("\n Código atraz do cartão(4 digitos): ");
	scanf("%d", &cli.codigo);
	system("cls");
	printf("\n ================================================");
	printf("\n \t\t  BANCO FATEC");
	printf("\n ================================================");
	printf("\n\n\t Conta criada com sucesso.\n\n");
	system("pause");
	return cli;
}


