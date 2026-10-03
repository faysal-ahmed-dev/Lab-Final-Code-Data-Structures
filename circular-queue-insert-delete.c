//A program to inplementation of insert delete operation of Circular Queue


#include <stdio.h>
#include<stdlib.h>

    int i, max=5, f=0, r=0, item,c;
    int cQ[10] = {0,0,0,0,0,0,0,0,0,0};

    int qdel() {

        if(f==0 && r==0){
            printf("\nQueue is empty");
            return 0;
        }
        cQ[f] = 0;

        if(f==r){
            f=0;
            r=0;
        }

        else if(f == max){
            f = 1;
        }else{
            f= f+1;
        }

        system("cls");
            printf("\n\tQUEUE: \n");
            printf("\n\tFRONT = %d", f);
            printf("\n\tREAR =  %d\n", r);

            for(i=1; i<=max; i++){
                printf("%5d", cQ[i]);
            }
    }

    int qins() {
        if( (f == 1 && r == max) || (f == r+1)){
            printf("Queue is Full");
            return 0;
        }

        if(f==0 && r==0){
            f=1;
            r=1;
        }

        else if(r==max){
            r=1;
        }else{
            r=r+1;
        }

        printf("\n\tEnter new item for Insert: ");
        scanf("%d", &item);
        cQ[r] = item;

        system("cls");
        printf("\n\tQueue: \n");
        printf("\n\tFRONT = %d", f);
        printf("\n\tREAR = %d\n", r);

        for(int i=1; i<=max; i++){
            printf("%5d", cQ[i]);
        }
    }

    int main(){
       
        for( ; ; ){
            printf("\nEnter your choice: \n\t1. QINSERT\n\t2. QDELETE\n\t3. Exit\n");
            scanf("%d", &c);

            switch(c) {
                case 1: 
                    qins();
                    break;
                
                case 2:
                    qdel();
                    break;

                default:
                    return 0;
            }
        }
    
        return 0;
    }