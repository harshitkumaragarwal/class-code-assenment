#include<stdio.h>
int main(){

    int i,n,num,count=0;

    printf("enter the number n ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the number of frequency");
    scanf("%d",&num);

    for(i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    printf("the number %d appear%d times",num,count);

    return 0;
}