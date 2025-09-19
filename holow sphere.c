#include<stdio.h>
int main(){
    int i,j,num;

    printf("enter the num");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){

            if(i==1 || j==num ||i==num || j==1)
            printf("*");
            else
            printf("_");
        }
        printf("");
    }
    return 0;
}