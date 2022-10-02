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
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
