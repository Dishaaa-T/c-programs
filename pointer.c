#include <stdio.h>
/*void main(){
    int i;
    int *p;
    p=&i;
    //scanning a variable
    scanf("%d\n",&i);
    printf("%u\n",&i); //address without pointer
    printf("%d\n",i); //value stored in the variable
    printf("%d\n",*p); //value stored in the variable
    printf("%u\n",p); //address of the variable in unsigned 
    printf("%p\n",p); //address of the variable in hexadecimal
    printf("%d\n",*(&i)); //overlycomplicated way of printing the value stored in variable


}

//pointer to a arrray
void main(){
int *p;
int a[10]; 
int i, sum=0;
for(i=0;i<2;i++){
    scanf("%d",&a[i]);
}
p=&a[0];
for(p=&a[0];*p<a[2];p++){
    sum=sum+(*p);
}

printf("%d",sum);
}



//pointer to a structure
struct emp{
    int emp_id;
    char name[20];
};
void main(){
struct emp e1;
struct emp *p;
e1.emp_id=123;
strcpy(e1.name,"abc");
p=&e1;

printf("%d is your id \n",p->emp_id);  //access using arrow operator
printf("name: %s \n", (*p).name);  // access using dot operator
}


//pointer a string 
int main(){
    char a[] ="abc";
    char *b = a; 
    printf("%s",a);
    printf("%s",b);





    return 0;
}*/