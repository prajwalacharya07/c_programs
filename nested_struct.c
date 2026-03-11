#include <stdio.h>
struct project{
    char p_name[10];
    int p_cost;
};
struct students{
    char s_name[20];
    char s_id[10];
    int s_class;
    struct project;
};

int main(){
    struct students com;
    struct project n1;

    printf("Enter the student details :");
    printf("\n Enter the student name :");
     scanf("%s",com.s_name);
     printf("\n Enter the student id:");
     scanf("%s",com.s_id);
     printf("\n Enter the student class :");
     scanf("%d",&com.s_class);

     printf("\n Enter the student project details :");
     printf("\n Enter the project name :");
      scanf("%s",n1.p_name);
     printf(" \n Enter the project cost :");
     scanf("%d",&n1.p_cost);

    printf("\n Student Details :");
    printf("\n Student name: %s",com.s_name);
    printf("\n Student id: %s",com.s_id);
    printf("\n Student class: %d",com.s_class);

    printf("\n Student Project details :");
    printf("\n Project name :%s",n1.p_name);
    printf("\n Project cost: %d",n1.p_cost);


    return 0;
}
