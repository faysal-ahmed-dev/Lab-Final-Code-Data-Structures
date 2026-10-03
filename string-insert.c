
// A program to Insert a String in an Array 

#include <stdio.h>
#include <string.h>

int main() {

    int n = 10;

    char arr[11][20] = {
        "Apple", "Banana", "Mango", "Orange", "Grape",
        "Guava", "Lemon", "Papaya", "Jackfruit", "Pineapple"
    };

    int loc;
    char item[20];

    printf("Enter Insert Location: ");
    scanf("%d", &loc);

    printf("Enter value to input: ");
    scanf("%s", item);

    // Shifting
    for (int i = n; i > loc; i--) {
        strcpy(arr[i], arr[i - 1]);
    }

    // Inserting
    strcpy(arr[loc], item);

    n++;

    // Printing
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    return 0;
}



// A program to Insert a String in an Array without srtcpy() method

// #include <stdio.h>
// #include<string.h>

// int main() {

//     int n = 10;

//     char arr[11][20] = {
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

//     int loc;
//     char item[20];

//     // Taking input of location and item
//     printf("Enter Insert Location: ");
//     scanf("%d", &loc);

//     printf("Enter value to input: ");
//     scanf("%s", item);

//     // Shifting values to right
//     for (int i = n; i > loc; i--) {
//         // Copy string
//         int j = 0;

//         while (arr[i - 1][j] != '\0') {
//             arr[i][j] = arr[i - 1][j];
//             j++;
//         }

//         arr[i][j] = '\0';
//     }

//     // Insert new string
//     int j = 0;

//     while (item[j] != '\0') {
//         arr[loc][j] = item[j];
//         j++;
//     }

//     arr[loc][j] = '\0';

//     n = n + 1;

//     // Printing final array
//     for (int i = 0; i < n; i++) {
//         printf("%s ", arr[i]);
//     }

//     return 0;
// }