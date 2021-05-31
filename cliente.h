#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct{
	char nome_cliente[50];
	int codigo;
} Cliente;

Cliente cadastrar(Cliente cli);

#endif
