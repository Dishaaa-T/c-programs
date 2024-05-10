#include <stdio.h>
void main(){

    int age;
    printf("enter your age=");
    scanf("%d",&age);
    if(age<=150)

    {
        if(age>=18)
        {
            printf("you're eligible to vote");
        }
        else
        {
            printf("you're not eligible to vote");
        }
    }
    else{
        printf("enetr a valid age");
        }

}