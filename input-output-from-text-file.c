// A program to input values from text file and display output to anothet text file

#include <stdio.h>
int main(){
   
    int n;
    printf("Enter number of values to take input: ");
    scanf("%d", &n);

    FILE *fp;

    int arr[10];

    fp = fopen("input-from-text-file.txt", "r");

    for(int i=0; i<n ; i++){
        fscanf(fp, "%d", &arr[i]);
        printf("%d ", arr[i]);
    }

    fclose(fp);

    fp = fopen("display-output-file.txt", "w");

    for(int i=0; i<n; i++){
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp);

    return 0;
}