#include <stdio.h>
#include <stdlib.h>

int min (int i, int *a) {
	int x;

	if (i == 0) x = *a;

	else {
		x = min (i-1, a); 
		if (x > *(a+i)) x = *(a+i);
		printf("min=%d\n", x);
	
	}
	return x;
   
}

int max (int i, int *a) {
	int x;

	if (i == 0) x = *a;

	else {
		x = max (i-1, a); 
		if (x < *(a+i)) x = *(a+i);
	
	}
	return x;
   
}



int main()
{
	
	int maior, menor;
	
	int s, i, *a, c;

	printf("Quantos numeros serão introduzidos? \n");
	scanf("%d", &s);

	a = (int*) malloc(s * sizeof(int));
	
	if(a == NULL)                     
	{
		printf("Erro! memoria não alocada.");
		exit(0);
	}
	
	
	for(i = 0; i < s; ++i)
	{
	printf("Digite o numero: ");
		scanf("%d", a + i);
    }
    
	
	
	maior = max(s-1, a);
	menor = min(s-1, a);
	printf("O menor é %d e o maior é %d\n", menor, maior);

	free(a);
	return 0;
}
	




