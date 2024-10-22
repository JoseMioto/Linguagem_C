
//menor valor

#include <stdio.h>


int main()
{
    int idade,menor;
    scanf("%d", &idade);
    menor = idade;
    for(int i = 2; i <= 5; i++)
	{
		scanf("%d", &idade);
		if(idade < menor)
		{
			menor = idade;
		}
	}
	printf("menor idade %d", menor);
    return 0;       
}