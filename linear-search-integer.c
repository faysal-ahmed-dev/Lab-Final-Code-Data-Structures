//A program to search a value using lenear search

#include <stdio.h>
int main(){
  
  int n=10;
  int arr[10]={20,35,37,40,45,50,51,55,67,98};
  int target;

  printf("Enter target item to search: ");
  scanf("%d", &target);

  int flag = 0;

  for(int i=0; i<n; i++){
  if(arr[i] == target){
      printf("Item found at index %d", i);
      flag = 1;
      break;
    }
  }
  
  if(flag == 0){
    printf("Item  not found");
  }

  return 0;

}
