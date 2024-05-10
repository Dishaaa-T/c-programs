#include <stdio.h>
void main(){

    float s1,s2,s3,s4,s5,avg,sum;
     printf("enter marks in the first subject=\n");
    scanf("%f",&s1);
     printf("enter marks in the second subject=\n");
    scanf("%f",&s2); 
    printf("enter marks in the third subject=\n");
    scanf("%f",&s3);
     printf("enter marks in the fourth subject=\n");
    scanf("%f",&s4);
     printf("enter marks in the fifth subject=\n");
    scanf("%f",&s5);

    sum = s1+s2+s3+s4+s5;
    avg= sum/5;

    if(avg>=90){
        printf("your grade is A");

    }
    
    else if(avg>=80){
        printf("your grade is B ");
        
    }
    
    else if(avg>=70){
        printf("your grade is c ");
        
    }

    else if(avg>=60){
        printf("your grade is d ");
        
    }

    else{
        printf("your grade is F");
    }

}