/*
 * diamond. * 
 * Will FK Tokunaga * Lab 01
 * CSCI 241
 * Hoyle
 */

#include <stdio.h>
#include <ctype.h>

int getDigit() {
  int input;
  while ((input = getchar()) != EOF){
    if (isdigit(input) == 0 ){
      return -1;
    }
    else {
      return input - '0';
    }
  }
  return -1;
}

int main(){
  printf("I will print a diamond for you, enter a size between 1-9: ");
  int height = getDigit();
  
  for (int i = 0; i < height; i++){  
    for (int k = 0; k < height - i; k++ ){
      printf(" ");
    }
    for (int j = 0; j < i*2 + 1; j++){
      printf("*");
    }
    printf("\n");
  }

  for (int m = 1; m < height; m++){
    for (int j = 0; j < m+1; j++){
      printf(" ");
    }
    for (int k = 0; k < height*2 - 1 - 2*m; k++){
      printf("*");
    }
    printf("\n");
  }
  
}


