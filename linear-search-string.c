// A program to lenear search a given value using string type data

#include <stdio.h>
#include<string.h>

int main(){

  int i, loc, n, c;
  char a[100][100], item[100];

  printf("Enter Number of Elements: ");
  scanf("%d", &n);

  printf("Enter String: \n");

  for(i=1; i<=n; i++){
    printf("\n[%d]= ",i);
    scanf("%s", a[i]);
  }


  while(1){

    loc = -1;

    printf("Enter Searching Item: ");
    scanf("%s", item);

    for(i=1; i<=n; i++){
      if(strcmp(item, a[i]) == 0){
        loc = i;
        break;
      }
    }

    if(loc == -1){
      printf("\nAbsent");
    }
    else
      printf("\nPresent at Location: %d", loc);
    

    printf("\nEnter 1 for search again, any number for exit: \n");
    scanf("%d", &c);

    if(c != 1){
      return 0;
    }

  }

  return 0;
  
}
