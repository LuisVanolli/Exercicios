#include <stdio.h>
  

int max (int n, int v[]) {
	int x;

	if (n == 1) x = v[0];
	else {
		x = max (n-1, v); 
		if (x < v[n-1]) x = v[n-1];
	
	}
	return x;
   
}

int min (int n, int v[]) {
	int x, menor;

	if (n == 1) x = v[0];

	else {
		x = min (n-1, v); 
		if (x > v[n-1]) x = v[n-1];
	
	}
	return x;
   
}


int main()
{
	
	int maior, menor, a[10]={2,34,15,95,10,65,1,78,21,9};
	
	maior = maxi(10,a);
	menor = mini(10,a);
	printf("O menor é %d e o maior é %d\n", menor, maior);

    	return 0;
}
	




