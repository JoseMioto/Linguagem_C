#include <stdio.h>
int main(){
	int idade;
	float peso;
	
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	
	printf("informe seu peso: ");
	scanf("%f", &peso);
	
	printf(" idade informada: %d \n e se peso e de: %.1f \n", idade, peso);
	
	return 0;
}