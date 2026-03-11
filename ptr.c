#include <stdio.h>
int main(){

    int a[]={1,2,3,4};

    int *p=&a[0];

    *p = 55;
    
  for(int i=0;i<4;i++){
    printf("%d ",*(a+i));
  }
  printf("\n %d",*p);
    return 0;

}