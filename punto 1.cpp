#include <stdio.h>
const int n=5;
int ayuda, i, j;

void ordenar(int *vector, int n) {
	for (i=0; i<n; i++) 
	{
		for (j=0; j<(n-i-1); j++)
		{
			if (*(vector+j)<*(vector+j+1))
			{
				ayuda=*(vector+j);
				*(vector+j)=*(vector+j+1);
				*(vector+j+1)=ayuda;
			}
		}
	}
}

int main() {
	int vector[n];

	for (i=0; i<n; i++) 
	{
		printf ("\n ingrese el numero %d: ", i+1);
		scanf("%d", &vector[i]);
	}

	ordenar(vector, n);
	
	printf ("el vector ordenado de mayor a menor es: \n");
	for (i=0;i<n;i++) 
	{
		printf("%d ", vector[i]);
	}

	return 0;
}