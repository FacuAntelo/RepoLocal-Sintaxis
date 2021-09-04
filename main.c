#include "escaner.h"

int main()
{	
	do{

	token = get_token();

	switch (token.nombre) {
		case SEP:
			printf("Separador: %s \n",token.buffer);
			break;
		case CAD:
			printf("Cadena: %s \n",token.buffer);
			break;
		case FDT:
			printf("Fin de Texto:");
			break;
	}

	}while(token.nombre != FDT);

	return 0;
}