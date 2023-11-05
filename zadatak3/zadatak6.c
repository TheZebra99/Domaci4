#include <stdio.h>

void binarni(int);


int main()
{
	int broj;
	printf("Unesite broj:\n");
	scanf_s("%d", &broj);
	printf("Broj %d u binarnom sistemu:\n", broj);
	binarni(broj);

	return 0;
}


void binarni(int n)
{
	int binaryArray[32];
	int i;
	for (i = 0; n>0; i++)
	{
		binaryArray[i] = n % 2;
		n = n / 2;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d", binaryArray[j]);
}
