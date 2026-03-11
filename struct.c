#include <stdio.h>
struct employe{
    char name[10];
    int id ;
    float salary;
};

int main(){
    struct employe a1;
    printf("Enter the emoloyees details :\n");
    printf("Enter the employee name:");
     scanf("%s",a1.name);
     printf("\n Enter the id of employee :");
     scanf("%d",&a1.id);
     printf("\n Enter the salary of emloyee :");
     scanf("%f",&a1.salary);

     printf("\n Details of employee :\n");
     printf("Name: %s\n",a1.name);
     printf("Id: %d\n",a1.id);
     printf("Salary: %f\n",a1.salary);

     return 0;
}