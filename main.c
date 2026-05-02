#include<stdio.h>

/*
  yo can yall do the other functions?
  don't forget to make y'all's branches
 ~ Joses
*/

float Add(float a, float b){
  return a+b;
}

float Sub(float a, float b){
  return a-b;
}

int main(){
  float num1, num2;
  int option;
  printf("\n ==== Really Simple Calculator ===\n");
  printf("  Input first number : ");
  scanf("%f", &num1);
  printf("  Input second number: ");
  scanf("%f", &num2);
  printf(" =================================\n\n");

  printf(" ==== Mathematical  Functions ====\n");
  printf("  1. Addition\n");
  printf("  2. Substraction\n");
  printf("  3. Multiplication\n");
  printf("  4. Division\n");
  printf(" =================================\n");
  printf("  Input Option [1/2/3/4]: ");
  scanf("%d", &option);
  printf(" =================================\n");

  float result;
  switch(option){
    case 1:
      result = Add(num1,num2);
      break;

    case 2: // and so on
      result = Sub(num1,num2);
  }
  
  printf("  Results: %.2f", result);

}