#include <stdio.h>   //Header file

int main() {        //main function
  //Variable declaration
  char op;          //charecter  declaration
  double first, second;   //double declaration
  printf("Enter an operator (+, -, *, /): "); //Input for operator
  scanf("%c", &op);
  printf("Enter two operands: ");     //Input operands
  scanf("%lf %lf", &first, &second);
    //Apply switch case for the calculator
  switch (op) {
    case '+':     //choice for addition 
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break; //breaking if this choice is made
    case '-': //choice for subtraction
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;  //breaking if this choice is made
    case '*'://choice for multiplication
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;//breaking if this choice is made
    case '/': //choice for division
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;  //breaking if this choice is made
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }//last condition executes if you make a mistake to choose the operantor or an invalid operator.
  return 0;
}
