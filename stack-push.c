#include <stdio.h>
#include<stdlib.h>

int stk[5], max = 5, item;

int top = -1;

 void push(){
    if(top == max-1){
        printf("Stack is Full");
        exit(0);
    }else{
        
        top++;

        stk[top] = item;   
        
        for(int i=top; i>=0; i--){
            printf("stk[%d] = %d\n", i, stk[i]);
        }
    }
   }

int main(){

    while(1){

        printf("\nEnter Item to push: ");
        scanf("%d", &item);
     
        push();

    }
    
    return 0;
}