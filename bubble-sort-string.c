// A program to sort 10 string values using Bubble Sort

#include <stdio.h>
#include <string.h>

int main(){

    char a[10][20] = {
        "Mango",
        "Apple",
        "Orange",
        "Banana",
        "Grape",
        "Lemon",
        "Guava",
        "Papaya",
        "Jackfruit",
        "Pineapple"
    };

    int n = 10;
    char temp[20];

    // Bubble Sort
    for(int j = 1; j <= n - 1; j++){

        printf("\nPass %d:\n", j);

        for(int i = 0; i < n - j; i++){

            if(strcmp(a[i], a[i + 1]) > 0){

                strcpy(temp, a[i]);
                strcpy(a[i], a[i + 1]);
                strcpy(a[i + 1], temp);
            }

            // Printing array after each comparison
            for(int k = 0; k < n; k++){
                printf("%15s", a[k]);
            }

            printf("\n");
        }
    }

    printf("\n\nSorted list:");

    for(int i = 0; i < n; i++){
        printf("\na[%d] = %s", i, a[i]);
    }

    return 0;
}