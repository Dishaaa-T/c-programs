#include <stdio.h>
//recursive function of factorial
int fact(int n){
    if (n>1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
    
}

void main(){
    int num;
    int res;
    printf("enter a numebr=");
    scanf("%d",&num);
    res=fact(num);
    printf("%d is the factorial of %d",res,num);
    
}

//recursive function of fibanacci series
#include <stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}

    void main(){
        int num;
        int i;
        printf("eneter number=");
        scanf("%d",&num);
        for(i=0;i<num;i++){
            printf("%d \t",fibonacci(i));
        }

    }

