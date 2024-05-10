//function with parameter and with return value 
/*#include <stdio.h>
int sum(int a ,int b){
    int s;
    s=a+b;
    return s;
}

int main(){
    int no1,no2,s;
    printf("enter 2 nubers ");
    scanf("%d %d", &no1,&no2);
    s=sum(no1,no2);
    printf("%d",s);
}


//function with parameter and without return value 
#include <stdio.h>
int sum(int a ,int b){
    int s;
    s=a+b;
    printf("%d",s)
    
}

int main(){
    int no1,no2;
    printf("enter 2 nubers ");
    scanf("%d %d", &no1,&no2);
    sum(no1,no2);   
}



//function without parameter and with return value 
#include <stdio.h>
int sum(){
    int a,b;
    int s;
    s=a+b;
    return s;
}

int main(){
    int no1,no2,s;
    printf("enter 2 nubers ");
    scanf("%d %d", &no1,&no2);
    s=sum(no1,no2);
    printf("%d",s);
}


//function without parameter and without return value 
#include <stdio.h>
int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int s;
    s=a+b;
    printf("%d",s);
}

int main(){
    
    sum(no1,no2);
   
}



//function of factorial using function

#include <stdio.h>

int fact(int n) {
    int factorial = 1; 
    int i;
    for (i = 1; i <= n; i++) {
        factorial = factorial * i; 
    }
    printf("%d is factorial of %d \n", factorial, n);

}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = fact(num);
    return 0;
}

//function to swap two given numbers


#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int no1,no2;
    scanf("%d %d",&no1,&no2);
    printf("before swapping: no1=%d \t no2=%d \n",no1,no2);
    swap(&no1,&no2);
    printf("after swapping: no1=%d \t no2=%d \n",no1,no2);
}*/