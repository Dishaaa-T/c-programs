#include <stdio.h>
void main()
{
    float basic,gross_salary, dear, rent;
    printf("enter your basic salary =");
    scanf("%f",&basic);
    dear=0.4*basic;
    rent=0.2*basic;
    gross_salary=basic+dear+rent;
    printf("your gross salary is %f",gross_salary);

}