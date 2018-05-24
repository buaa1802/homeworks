#include <stdio.h>

// 第1题：输入两个非零自然数，计算并分别输出它们的最大公约数和最小公倍数
int main() {
  int first, second, a, b, tmp;
  printf("Input two integer numbers: ");  
  scanf("%d%d", &first, &second);  
  a=first;   b=second;
  while (b!=0)
  {
    tmp = a % b;
    a = b;
    b = tmp;
  }
  printf("The two numbers is: %d, %d\n", first, second);
  printf("the max common divisor is: %d\n", a);
  printf("The min common multiple is: %d\n", first * second / a);
  return 0;
}
