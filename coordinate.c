#include <stdio.h>
void main(){
    int x , y ;
    printf("enter x coordinate of the plane=\n");
    scanf("%d",&x);
    printf("eneter y cooridnate of the plane=\n");
    scanf("%d",&y);
    if (x>0 && y>0){
        printf("the coordinate (%d,%d) lies in first Qudrant",x,y);
    }

    else if (x<0 && y>0){
        printf("the coordinate (%d,%d) lies in second Qudrant",x,y);
    }

    else if (x<0 && y<0){
        printf("the coordinate (%d,%d) lies in third Qudrant",x,y);
    }

    else if (x<0 && y<0){
        printf("the coordinate (%d,%d) lies in fourth Qudrant",x,y);
    }

    else if (x==0 && y==0){
        printf("coordiante is at origin");
    }

    else if(x==0 && y>0){
        printf("point lies on positive y axis");
    }

    else if(x==0 && y<0){
        printf("point lies on negative y axis");
    }

    else if(x>0 && y==0){
        printf("point lies on positive x axis");
    }

    else if(x<0 && y==0){
        printf("point lies on negative x axis");
    }



    
}