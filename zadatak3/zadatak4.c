#include <stdio.h>
#include <math.h>

int prost(int);


int main()
{
    int m;
    printf("Unesite broj:\n");
    scanf_s("%d", &m);
    if (prost(m))
    {
        printf("%d je prost broj\n", m);
    }
    else
    {
        printf("%d nije prost broj\n", m);
    }

    return 0;
}


int prost(int m)
{
    for (int i = 2; i < sqrt(m); i++)
    {
        if (m % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
