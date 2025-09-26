#include<stdio.h>
void sum(){

    int a,b,result;

    printf("enter the number a");
    scanf("%d",&a);

    printf("enter the number b");
    scanf("%d",&b);

    result=a+b;
    printf("sum=%d",result);
}

int main(){
    sum();
    return 0;
}