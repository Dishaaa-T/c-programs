#include <stdio.h>
void main()
{
    float n, i, p, sum = 0, juice, ot;
    scanf("%f", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &p);
        sum =sum+p;
    }
    juice = sum/100;
    ot = (juice / n)*100;
    printf("%f\n", ot);

}