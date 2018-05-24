#include <stdio.h>

// 第2题：一百匹马将二百块砖驮上山，其中大马每匹驮三块、中马每匹驮两块，而小马两匹驮一块，计算并输出各种马匹数目（非负的整数）。
int main() {
  int large, middle, small;
  for(large = 1; large <= 200 / 3; large++) {
    middle = 100 - 2 * large;
    small = 100 - large - middle;
    if(middle < 0 || small < 0) break;
    printf("The horses count is: large %3d; middle %3d; small %3d;\n", large, middle, small);  
  }
  return 0;
}
