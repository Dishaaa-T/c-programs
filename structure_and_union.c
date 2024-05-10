# include <stdio.h>
# include <string.h>
//making a simple structure
/*struct stud{
    int roll;
    char name[20];
    int class;
};
 int main()
 {
    struct stud s1={1,"abc",2};
    printf("roll no is = %d\t, name is %s \t, class is %d", s1.roll, s1.name, s1.class);
    return 0;

 }


//structure ka array 
 struct stud{
    int roll;
    int class;
    char name[30];
 };

 void main(){

    struct stud s[5];
    int i;
   
    for(i=0;i<5;i++){
        printf("enter roll no of student=");
        scanf("%d",&s[i].roll);
        printf("enter class of student=");
        scanf("%d",&s[i].class);
        printf("enter name of student=");
        scanf("%s",&s[i].name);
    }

    //printing records of students

    for(i=0;i<5;i++){
        printf("roll no = %d\t class %d \t, name = %s\n", s[i].roll, s[i].class, s[i].name);
        printf("\n");
        }   
    }


    //making array and union;
     #include <stdio.h>
 # include <string.h>
 struct s_stud{
    int roll;
    int class;
    char name[30];
 };
 
 union u_stud{
     int roll;
     int class;
     char name[20];
 };

 void main(){
     struct s_stud s1 ={1,2,"abc"};
     union u_stud u1={1,2,"dca"};
     
    printf("%d btyes",sizeof(s1));
    printf("%d bytes", sizeof(u1));
 }*/

 