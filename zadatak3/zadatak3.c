#include <stdio.h>

double iznos(int, double, double);


int main()
{
    int n;
    double p, s;
    printf("Unesite pocetnu sumu, godisnju kamatu i broj godina:\n");
    scanf_s("%lf%lf%d", &s, &p, &n);
    printf("Ustedjevina posle %d godina uz %lf kamate iznosi %lf dinara\n", n, p, iznos(n,p,s));
    
    return 0;
}


double iznos(int n, double p, double s)
{
    if (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            s = s * (1 + p / 100);
        }
        return s;
    }
    else
        return s;
}
