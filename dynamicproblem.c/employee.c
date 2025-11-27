#include<Stdio.h>
#include<string.h>

struct employee {
    int id;
    char name[50];
    float salary;
} s1[10];

int main(){
    struct employee emp;

    printf("enter the employee id:");
    scanf("%d",&emp.id);

    printf("enter the employee name:");
    scanf("%s",emp.name);

    printf("enter the employee salary");
    scanf("%f",&emp.salary);

    printf("employee details \n");
    printf("employee id %d\n",emp.id);
    printf("employee name %s\n",emp.name);
    printf("employee salary %2f\n",emp.salary);

    

    return 0;
}

