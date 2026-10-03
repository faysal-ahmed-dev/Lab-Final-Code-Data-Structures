// A program to delete an integer item from an array

#include <stdio.h>
int main(){
    
   int arr[10] = {5,10,15,20,30,40,50,60,70,43};
   int n= 10;
   int loc;

   printf("Enter location to delete the item: ");
   scanf("%d", &loc);

   for(int i=loc; i<n-1; i++){
     arr[i] = arr[i+1];
   }

   n = n-1;

   for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
   }

    return 0;
}