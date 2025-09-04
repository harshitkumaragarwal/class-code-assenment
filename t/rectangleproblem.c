#include<stdio.h>
int main(){
    int l1,l2,l3,b1,b2,b3;
    int p1,p2,p3;

    printf("enter the l1,b1");
    scanf("%d %d",&l1,&b2);

     printf("enter the l2,b2");
    scanf("%d %d",&l2,&b2);

     printf("enter the l3,b3");
    scanf("%d %d",&l3,&l3);

    p1=2*(l1+b1);
     p2=2*(l2+b2);
      p3=2*(l3+b3);

      printf("perimeter of rectangle 1=%d",p1);
      printf("perimeter of rectangle 2=%d",p2);
      printf("perimeter of rectangle 3=%d",p3);

      printf("rectangle with higest perimeter");

      return 0;

}