#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario,prestacao,relation;
	printf("Insira o sal�rio: ");
	scanf("%f", &salario);
	
	printf("Insira o valor da prestac�o: ");
	scanf("%f", &prestacao);
	
	relation = (salario*20)/100;	

	if (prestacao > relation) {
		printf("\nEmpr�stimo n�o concedido");
	} else {
		printf("\nEmpr�stimo concedido");
	}
	
	
	
	
	return 0;
}
