#include<stdio.h>
int main(){

    int i,n;

    printf("enter the number n");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int positive=0,negative=0,even=0,odd=0;

    for(i=0;i<n;i++){
          if(arr[i]>0){
        positive++;
    }
    else if(arr[i]<0){
        negative++;
    }

    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }

    }
    printf("count of positive number %d",positive);
    printf("count of negative number is %d",negative);
    printf("count of odd number %d",odd);
    printf("count of even number %d",even);

    return 0;

}