#include<stdio.h>
float bmi(){

    float height,weight,result;

    printf("enter the height");
    scanf("%d",&height);

    printf("enter the weight");
    scanf("%d",&weight);
    
    result=weight/(height*height);
    return result;
}

int main(){
    float result;

    result=bmi();

    if(result<10){
        printf("starvation");
    } else if(result>10 && result<15){
        printf("ameture");
    }else{
        printf("default");
    }
    return 0;
}