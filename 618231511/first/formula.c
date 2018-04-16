#include <stdio.h>
#include <math.h>

int main()
{
  double number, result;
  printf("Please input a number: ");
  scanf("%lf", &number);
  if(number <= 0) {
    result = sin(number);
  } else if(number <= 10) {
    result = exp(2 * number) + 1;
  } else {
    result = sqrt(pow(number, 3) + pow(number, 2) + 1);
  }
  printf("The number you input is: %.2lf, The result of the formula is: %.2lf\n", number, result);
  return 0;
}
