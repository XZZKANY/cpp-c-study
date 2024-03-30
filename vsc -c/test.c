#include <stdio.h>
#include <math.h>
int main()
{
    char a;
    long c;
    int b;
    float d;
    double e;
    int cns = scanf("%c%ld%d%f", &a, &c, &b, &d, & e);
    printf("%d\n", cns);
    printf("%c,%ld,%d,%f,%lf\n", a, c, b, d, e);
    
    int total_characters = 2 + 2 * (cns - 1) + 15;
    
    printf("%d\n", total_characters);
    printf("%d\n", 19 );
    
   
    
}