#include <stdio.h>
#include <math.h>

int prost(int);
int prostiBrojevi(int);


int main()
{
    int broj;
    printf("Unesite broj, veci od 8:\n");
    scanf_s("%d", &broj);
    printf("Prosti brojevi do %d su:\n", broj);
    printf("2\t3\t5\t7\t");
    prostiBrojevi(broj);


    return 0;
}


int prost(int m)
{
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int prostiBrojevi(int broj)
{
    for (int i = 9; i <= broj; i += 2)
    {
        if (prost(i))
        {
            printf("%d\t", i);
        }
    }
}
