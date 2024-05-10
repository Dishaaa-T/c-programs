#include <stdio.h>
void main(){
int num,i;
int n1= 0,n2=1,n3;
printf("enter length of the series=");
scanf("%d",&num);
 printf("%d\t,%d\t",n1,n2);
for(i=3;i<=num;i++){
    n3=n1+n2;
    printf("%d",n3);
    n1=n2;
    n2=n3;
}
}