#include <stdio.h>

// 第3题：将一字符串输入到数组后将其输出，将其中的英文字母大小写互换后再将整个字符串输出。
int main() {
  char str[100];
  char result[100];
  int i, c_no;
  printf("Plaese input a string: ");
  scanf("%s", str);
  printf("The string you input is: %s\n", str);
  for(i=0; i < 100; i++){
    c_no = str[i];
    if(c_no >= 97 && c_no <= 122) c_no -= 32;
    result[i] = c_no;
  }
  printf("The string convert result is: %s\n", result);
}
