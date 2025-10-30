#include<stdio.h>
#include<string.h>
struct address
{
    char city[100];
    char state[100];
    char locality[100];
    int pincode;
};
struct employee
{
   char name[100];
   int age;
   int salary;
   char bloodgroup[100];
   struct address A;
}E1;
int main()
{
    printf("Enter the name of the employee:\n");
    scanf("%s", E1.name);
    printf("Enter the age of the employee:\n");
    scanf("%d",&E1.age);
    printf("Enter the salary of the employee:\n");
    scanf("%d",&E1.salary);
    printf("Enter the blood group of the employee:\n");
    scanf("%s", E1.bloodgroup);
    printf("Enter the address of the employee:\n");
    printf("Locality:\n");
    scanf("%s", E1.A.locality);
    printf("City:\n");
    scanf("%s", E1.A.city);
    printf("State:\n");
    scanf("%s", E1.A.state);
    printf("Pincode:\n");
    scanf("%d",&E1.A.pincode);
    printf("Employee details:\n");
    printf("Name:%s\n",E1.name);
    printf("Age:%d\n",E1.age);
    printf("Salary:%d\n",E1.salary);
    printf("Blood Group:%s\n",E1.bloodgroup);
    printf("Address of the employee:\n");
    printf("%s\n",E1.A.locality);
    printf("%s\n",E1.A.city);
    printf("%s\n",E1.A.state);
    printf("%d\n",E1.A.pincode);
    return 0;
}