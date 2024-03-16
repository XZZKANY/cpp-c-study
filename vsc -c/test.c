#include <stdio.h>

int main()
{
    double A, B, C, D;
   
    scanf("%lf,%lf", &A, &B);
    C = A + B;
    printf("%-10.6lf + %10.6lf = %-10.2lf\n", A, B, C);


    A = ((int)(A * 100 + 0.5)) / 100.0;
    B = ((int)(B * 100 + 0.5)) / 100.0;
    D = A + B;
    printf("%-10.6f + %10.6f = %-10.2f\n", A, B, D);

    return 0;
}