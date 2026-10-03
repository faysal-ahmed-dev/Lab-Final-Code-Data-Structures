//A program to solve Tower of Hanoi using function and recursion

#include <stdio.h>

int n;

void Tower(int n, char bg, char ax, char ed){
    if(n == 1){
        printf("\n%c ----> %c", bg, ed);
    }
    else{
        Tower(n-1, bg, ed, ax);
        printf("\n%c ----> %c", bg, ed);
        Tower(n-1, ax, bg, ed);
    }
}

int main(){
   
    printf("\nEnter Number of Disks: ");
    scanf("%d", &n);
    Tower(n, 'a', 'b', 'c');

    return 0;
}