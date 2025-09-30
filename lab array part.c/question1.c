#include<stdio.h>
int main(){

    int i,n;

    printf("enter the number n");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int largest=arr[0];

    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("largest element %d",largest);
    return 0;
}