#include <stdio.h>

int main()
{

  float score;
  printf("Please input a score: ");
  scanf("%f", &score);
  int scoreInt = score;
  char level;

  printf("%d", scoreInt);
  printf("%d", scoreInt / 10);

  switch (scoreInt / 10)
  {
    case 10: level = 'A'; break;
    case 9: level = 'A'; break;
    case 8: level = 'B'; break;
    case 7: level = 'C'; break;
    case 6: level = 'D'; break;
    default: level = 'E';
  }
  printf("Your score is: %.2f, The level of your score is: %c.\n", score, level);
  return 0;
}
