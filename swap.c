#include <stdio.h>

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}



int main(){
    int a=10,b=30,t;


    printf("a %d",a);
    printf("\n b %d\n",b);

   swap(a,b);
         printf("a= %d",a);
    printf("\n b= %d\n",b); 


    t=a;
    a=b;
    b=t;

     printf("  A %d",a);
    printf("\n B %d\n",b);

    

    return 0;

}