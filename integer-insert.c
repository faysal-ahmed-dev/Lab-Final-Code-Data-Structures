// A program to Insert some Integer values in an Array

#include <stdio.h>
int main(){
    int n = 10;
   int arr[11] = {2,5,4,6,7,8,9,1,3,34};
   int loc, item;

   //taking input of location and item from user
   printf("Enter Insert Location: ");
   scanf("%d", &loc);

   printf("Enter value to input: ");
   scanf("%d", &item);

   //shifting values to right
   for(int i=n; i>loc; i--){
    arr[i] = arr[i-1];
   }

   arr[loc] = item;

   n = n+1;
   
   //printing the final array with new item
   for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
   }


    return 0;
}
