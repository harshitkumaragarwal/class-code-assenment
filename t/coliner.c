#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;

    printf("enter 6 point of line ");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,y3);

    int area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);

    if(area==0){
        printf("it is collinear");
    }
    else{
        printf("it is non colliinear");
    }
    return 0;
}