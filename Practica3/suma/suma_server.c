#include "suma.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *
suma_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;
	//printf("Parametros: %d, %d\n", argp->a, argp->b);
	result = argp->a + argp->b;
	printf("Retornando: %d\n", result);
	return &result;
}

int *
resta_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;
	
	//printf("Parametros: %d, %d\n", argp->a, argp->b);
	result = argp->a - argp->b;
	printf("Retornando: %d\n", result);
	return &result;
}

int *
multi_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;
	
	//printf("Parametros: %d, %d\n", argp->a, argp->b);
	result = argp->a * argp->b;
	printf("Retornando: %d\n", result);
	return &result;
}

int *
div_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;
	
	//printf("Parametros: %d, %d\n", argp->a, argp->b);
	result = argp->a / argp->b;
	printf("Retornando: %d\n", result);
	return &result;
}