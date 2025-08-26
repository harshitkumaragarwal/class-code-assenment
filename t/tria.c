#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter three side of triangle");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c){
        printf("it is equlilateral triangle");
    }
    else if(a==b||b==c||c==a){
        printf("isoscles triangle");
    }
    else {
        printf("scalene triangle");
    }

    return 0;

}