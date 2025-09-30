#include<stdio.h>
int main(){
    int num,size,i,j,row,col,distance,value;

    printf("enter the number num");
    scanf("%d",&num);

    size=2*num-1;

    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){

            row=(i-num<0) ? -(i-num) : (i-num);
            col=(j-num<0)? -(j-num) :(j-num);

            distance=(row>col) ? row :col;

            value=num-distance;

            printf("%d ",value);
        }
        printf("\n");
    }

    return 0;
}