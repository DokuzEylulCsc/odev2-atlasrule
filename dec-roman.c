//Müslüm Berkay Yılmaz, 2018280056 
//Tested on: gcc and clang ubuntu0.18.04.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getRoman(int num) {

  if (num < 1 | num > 3999) {
    return "-Out of limits.-";
  }
  
  char * output = (char*)malloc(100);

  //Since 1,4,5,9 and their multiples by 10 have special expressions;
  int values[12] = {1000, 900, 500, 100,  90,  50,  40,  10,   9,   5,   4,   1};
  char * romans[12] = {"M","CM","D","C","XC","L","XL","X","IX","V","IV","I"};

  for (int i=0; i<12; i++) {
    while (num >= values[i]) {
      
      //We add the needed roman symbols to the output string
      //and decrease the number by their equivalent values.
      
      strcat(output, romans[i]);

      num -= values[i];

    }
  }
  return output;
}


int main(void) {

  printf("\n(Enter -1 to quit.)");

  int dec;

  while (1) {
  printf("\n\nDecimal: ");
  scanf("%d", &dec);

  if (dec == -1) {
    return 0; }
  
  printf("In roman: %s", getRoman(dec));
  }

}
