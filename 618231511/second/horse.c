#include <stdio.h>

// 第2题：一百匹马将二百块砖驮上山，其中大马每匹驮三块、中马每匹驮两块，而小马两匹驮一块，计算并输出各种马匹数目（非负的整数）。
// 3x + 2y + z/2 = 200
// x + y + z = 100
// 5x + 3y = 300
int main() {
  int large, middle, small;
  for(large = 0; large <= 200 / 3; large++) {
    // 中马数量必须为整数
    if((300 - 5 * large) % 3 > 0) continue;
    middle = (300 - 5 * large) / 3;
    small = 100 - large - middle;
    // 小马数量必须为2的整数倍
    if(small % 2 > 0) continue;
    // 中马小马数量不能小于0
    if(middle < 0 || small < 0) break;
    printf("The horses count is: large %3d; middle %3d; small %3d;\n", large, middle, small);  
  }
  return 0;
}
