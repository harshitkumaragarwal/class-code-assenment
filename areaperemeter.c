#include<stdio.h>
int main(){
    float length,breath,area,perimeter;

    printf("enter the length");
    scanf("%f",&length);

    printf("enter the breath");
    scanf("%f",&breath);

    area=length*breath;
    perimeter=2*(length+breath);

    printf("area of rectangle=%f\n",area);
    printf("perimeter of rectangle=%f\n",perimeter);

    return 0;
}