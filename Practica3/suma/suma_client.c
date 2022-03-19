/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "suma.h"
#include <stdio.h>

int suma_prog_1(char *host, int a, int b, int operacion) {
	CLIENT *clnt;
	int *result_1;
	int *result_2;
	int *result_3;
	int *result_4;
	dupla_int suma_1_arg;
	dupla_int resta_1_arg;
	dupla_int multi_1_arg;
	dupla_int div_1_arg;
	dupla_int operation;
	

#ifndef	DEBUG
	clnt = clnt_create (host, SUMA_PROG, SUMA_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	suma_1_arg.a = a;
	suma_1_arg.b = b;
	operation.operacion = operacion;

if(operation.operacion == 1){
	printf("Valor de operacion: %d suma\n",operation.operacion);	
	result_1 = suma_1(&suma_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	} else {
		printf("Resultado = %d\n", *result_1);
		
	}
	return *result_1;
}else if(operation.operacion==2){
	printf("Valor de operacion: %d resta\n",operation.operacion);
	resta_1_arg.a = a;
	resta_1_arg.b = b;
	result_2 = resta_1(&resta_1_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	 
	printf("Resultado = %d\n", *result_2);
	return *result_2;
}else if(operation.operacion == 3){
	printf("Valor de operacion: %d multiplicacion\n",operation.operacion);
	multi_1_arg.a = a;
	multi_1_arg.b = b;
	result_3 = multi_1(&multi_1_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	printf("Resultado = %d\n", *result_3);
	return *result_3;
}else if(operation.operacion==4){
	printf("Valor de operacion: %d division\n",operation.operacion);
	div_1_arg.a = a;
	div_1_arg.b = b;
	result_4 = div_1(&div_1_arg, clnt);
	if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	
	printf("Resultado = %d\n", *result_4);
	return *result_4;
}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}

//-------------------------------------------------------------------------
int
main (int argc, char *argv[]){
	char *host;
	CLIENT *clnt;
	int a, b, operacion;
	if (argc != 5) {
		printf ("usage: %s Servidor num1 num2 operacion\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	
	if ((a = atoi(argv[2])) == 0 && *argv[2] != '0') {
		fprintf(stderr, "Dato invalido: %s\n", argv[2]);
		exit(1);
	}
	if ((b = atoi(argv[3])) == 0 && *argv[3] != '0') {
		fprintf(stderr, "Dato invalido: %s\n", argv[3]);
		exit(1);
	}
	if ((operacion = atoi(argv[4])) == 0 && *argv[4] != '0') {
		fprintf(stderr, "Dato invalido: %s\n", argv[4]);
		exit(1);
	}
	suma_prog_1(host, a, b, operacion);
}