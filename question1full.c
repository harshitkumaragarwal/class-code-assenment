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
    int second=arr[1];

    for(i=1;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]<largest){
            second=arr[i];
        }
    }
    printf("largest number %d",largest);

    if(second==arr[1]){
        printf("second largest elemt are same %d",second);
    }
    else{
        printf("second largest element %d",second);
    }
    return 0;
}