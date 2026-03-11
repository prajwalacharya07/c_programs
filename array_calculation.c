#include <stdio.h>
#include <stdlib.h>

void arr_input(int *n,int *arr){
    printf("Enter the limit <100 \n");
    scanf("%d",n);
    printf("Enter the elements : \n");
     for(int i=0; i<*n; i++){
        scanf("%d",&arr[i]);
     }
     
}
void arr_output(int n,int *arr){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
     }
 printf(" \n");
}
void find_me(int n,int *arr){
    int k,found=0;
    printf("Enter the key to search \n");
    scanf("%d",&k);
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            printf("Find your key at %dth place \n",i+1);
          found=1;
        }
    }
    if( found !=1){
        printf("Key is not found \n");
    }
      
}
void sort_array(int n, int *arr){
    printf("\n Array sorted succesfully..! \n ");
    for(int i=0; i<n-1 ; i++){
         for(int j=0 ; j<n-i-1 ;j++){
                if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void array_insert(int *n,int *arr){
    int pos=0,value,i;
    printf("\nEnter the position for store the element \n :");
    scanf("%d",&pos);
    
    while(pos<0||pos>*n){
        printf("\n Invalid position \n Enter again (0 - %d): \n",*n);
        scanf("%d",&pos);
      
    }

    printf("\n Enter the value \n: ");
    scanf("%d",&value);

      for(i = *n;i > pos;i--){
       arr[i] = arr[i-1];
      }
      arr[pos] = value;
      (*n)++;
       
      printf("\n Inserted succesfully..!");
}
  void delete_indx(int *n,int *arr){
    int i,indx;
     printf(" Enter the index to delete an element : ");
     scanf("%d",&indx);
      while(indx < 0 || indx >*n){
        printf("\n Invalid position \n Try again (o - %d) \n:",*n);
        scanf("%d",&indx);
    }
      for(i=indx;i< *n-1;i++){
        arr[i]=arr[i+1];
      } 
      (*n)--;
      printf("Deleted succesfully..!\n");
        }



 int main(){
int n,arr[100],choise ;
printf("Array operations\n");
while(1){
    printf("Select the operation \n 1.input the array \n 2.output the array \n 3.find the element");
    printf("\n 4.to sort the element\n 5.insert the element \n 6.delete an a index \n ");
    scanf("%d",&choise);

    switch(choise){
        case 1:{
            arr_input(&n,arr);
        break;
        }
        case 2:{
            arr_output(n,arr);
        break;
        }
        case 3:{
            find_me(n,arr);
            break;
         }
         case 4:{
            sort_array(n,arr);
            break;
         }
         case 5:{
            array_insert(&n,arr);
            break;
         }
         case 6:{
            delete_indx(&n,arr);
            break;
         }
        default:printf("Program cancelled..!");
        exit(1);
    }


}
return 0;
 }