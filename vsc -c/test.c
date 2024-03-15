#include<stdio.h>
int main()
{
    double A,B,C,D;
    float a,b;
    scanf("%lf,%lf",&A,&B);
    C=A+B;
    printf("%-10.6lf+%10.6lf=%-10.2lf\n",A,B,C);
    a=(A*100+0.5)/100.0;
    b=(B*100+0.5)/100.0;
    D=a+b;
    printf("%-10.6lf+%10.6lf=%-10.2lf\n",a,b,D);
    return 0;
}