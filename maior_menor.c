#include <stdio.h>


int main()
{
    int i, maior, menor, a[10]={2,34,15,95,10,65,1,78,21,29};
	maior=a[0];
	menor=a[0];

	for(i=1; i<=9; i++){

		if(a[i]>maior) maior=a[i];

		else if(a[i]<menor) menor=a[i];
	} 

	printf("O maior numero é %d e o menor é %d\n", maior, menor);

    return 0;
}
