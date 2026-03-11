#include <stdio.h>
   int main(){

int i,pos,value,arr[100],n,index;

printf("Enter the limit :\n");
scanf("%d",&n);
  printf("\n Enter the values ;\n");
  
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("\n the values :\n");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  
    printf("Enter the position to add the value \n");
    scanf("%d",&pos);
     printf("Enter the value : \n ");
     scanf("%d", &value);
    
     for(i=n;i>pos-1;i--){
      arr[i]=arr[i-1];
     } 
     arr[pos]=value;
   n++;

     printf("\n After adding the value : \n");
       for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }


  printf("Enter the index for deleting the value : \n ");
  scanf("%d",&index);

    for(i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("\n After deleting the value \n ");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }

  return 0;
  

}