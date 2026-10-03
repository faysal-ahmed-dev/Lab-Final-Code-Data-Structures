
// A program to search a string using binary search 

#include <stdio.h>
#include<string.h>

int main(){
   char arr[10][20] = {
        "Apple",
        "Banana",
        "Grape",
        "Guava",
        "Jackfruit",
        "Lemon",
        "Mango",
        "Orange",
        "Papaya",
        "Pineapple"
    };

    char target[10] = {"Lemon"};

    int beg = 0, end = 10-1;
    int flag = 0;
    
    while(beg <= end){
        int mid = (beg + end)/2;

        if(strcmp(arr[mid], target) == 0){
            printf("%s found at index %d", target, mid);
            flag = 1;
            break;
        }

        else if(strcmp(arr[mid], target) > 0){
            end = mid - 1;
        }

        else if(strcmp(arr[mid], target) < 0){
            beg = mid + 1;
        }
    }

    if(flag == 0){
        printf("%s not found ! ", target);
    }


    return 0;
}