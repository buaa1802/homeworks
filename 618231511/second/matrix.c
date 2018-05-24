#include <stdio.h>

// 第4题：按下列形式使用循环生成一个十阶的矩阵A（下三角）到二维数组中，再输出。
int main()
{
  int i, j, number;
  int matrix[10][10];
  for(i=0; i < 10; i++)
  {
    for(j=0; j < 10; j++)
    {
      number = i >= j ? j + 1 : 0;
      matrix[i][j] = number;
    }
  }


  for(i=0; i < 10; i++)
  {
    for(j=0; j < 10; j++)
      printf("%-4d", matrix[i][j]);
    printf("\n");
  }
  return 0;
}
