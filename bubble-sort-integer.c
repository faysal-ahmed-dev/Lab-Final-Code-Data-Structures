// A program to sort some Integer values using Bubble Sort

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   int a[50];
   int n,temp;

   printf("Enter Number of elements :");
   scanf("%d", &n);
    
   srand(time(NULL));
   for(int i=0; i<n; i++){
       a[i] = rand()/100;
       printf("%d\n", a[i]);
   }

   for(int j=1; j<=n-1; j++){
      printf("\nPass %d:\n", j);

      for(int i=0;i<n-j; i++ ){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
            for(int k=0;k<n; k++){
                printf("%5d",a[k]);
            }
            printf("\n");

        }
   }

   printf("\n\nSorted list :");
   for(int i=0; i<n; i++){
    printf("\na[%d] = %d", i,a[i]);

   }
   return 0;
}
