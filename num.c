//program to perform arithemetic operation
#include<stdio.h>

int main() {
  int num1, num2;
  int addition, subtraction, multiplication, modulus;
  float division;
  
  printf("input first number: ");
  scanf("%d", &num1);  //input first value 
  printf("input seconf number: ");
  scanf("%d", &num2);  //input second value 
  
  addition =num1+num2;
  subtraction =num1-num2;
  multiplication =num1*num2;
  modulus= num1%num2;
  division= num1/num2;
  
  printf("The sum of the %d and %d is---> %d\n", num1, num2, addition);
  printf("The subtraction of the %d and %d is---> %d\n", num1, num2, subtraction);
  printf("The product the %d and %d is---> %d\n", num1, num2, multiplication);
  printf("The modulus of the %d and %d is---> %d\n", num1, num2, modulus);
  printf("The division of the %d and %d is---> %f\n", num1, num2, division);
  
  return 0;
  
}
