#ifndef CONTA_H
#define CONTA_H

typedef struct{
	int numConta;
	Cliente clien_conta;
	float saldo;
} Conta;

Conta depositar(Conta con);

Conta sacar(Conta con);

void consultar(Conta con);

#endif
