//A program to search a given value using Binary Search

#include <stdio.h>
int main(){
   int n=10;
   int arr[10]={2,4,6,7,8,9,10,12,14,15};
   int target = 9;
   int flag = 0;

   int beg = 0;
   int end = n-1;    // end = 9;

    while(beg <= end){
        
        int mid = (beg+end)/2;

        if(arr[mid] == target){
            printf("%d Found at index %d",target,mid);
            flag = 1;
            break;
        }

        else if(arr[mid] > target){
            end = mid-1;
        }

        else beg = mid+1;
    }

    if(flag == 0){
        printf("Target- %d Not found",target);
    }

    return 0;
}
