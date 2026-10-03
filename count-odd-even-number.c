// A program to count total even and odd number 

#include <stdio.h>
int main(){

   int arr[10] = {23, 12, 4, 7, 98, 11, 23, 46, 55, 29};

   int even = 0, odd = 0;

   for(int i = 0 ; i < 10; i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
   }

   printf("Total Even = %d | Total Odd = %d", even, odd);

    return 0;
}