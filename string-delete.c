
// A program to delete a string item from an array

#include <stdio.h>
#include<string.h>
int main(){
   
    int n = 10;
    int loc;

    char str[10][20] = {
        "Apple",
        "Banana",
        "Mango",
        "Orange",
        "Grape",
        "Guava",
        "Lemon",
        "Papaya",
        "Jackfruit",
        "Pineapple"
    };

    printf("Enter Location to Delete item: ");
    scanf("%d", &loc);

    for(int i = loc; i < n-1; i++){
        strcpy(str[i], str[i+1]);
    }

    n = n - 1;

    for(int i = 0; i < n; i++){
        printf("%s ", str[i]);
    }

    return 0;
}



// A program to delete a string item from an array without strcpy() method

// #include <stdio.h>

// int main(){

//     char arr[10][20] = {
//         "Apple",
//         "Banana",
//         "Mango",
//         "Orange",
//         "Grape",
//         "Guava",
//         "Lemon",
//         "Papaya",
//         "Jackfruit",
//         "Pineapple"
//     };

//     int n = 10;
//     int loc;

//     printf("Enter location to delete the item: ");
//     scanf("%d", &loc);

//     // Shifting values to left
//     for(int i = loc; i < n - 1; i++){

//         int j = 0;

//         while(arr[i + 1][j] != '\0'){
//             arr[i][j] = arr[i + 1][j];
//             j++;
//         }

//         arr[i][j] = '\0';
//     }

//     n = n - 1;

//     // Printing final array
//     for(int i = 0; i < n; i++){
//         printf("%s ", arr[i]);
//     }

//     return 0;
// }