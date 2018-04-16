#include <stdio.h>

int main()
{
  float score;
  int scoreInt;
  char level;

  printf("Please input a score: ");
  scanf("%f", &score);
  scoreInt = score;

  switch (scoreInt / 10)
  {
    case 10:
    case 9: level = 'A'; break;
    case 8: level = 'B'; break;
    case 7: level = 'C'; break;
    case 6: level = 'D'; break;
    default: level = 'E';
  }
  printf("Your score is: %.2f, The level of your score is: %c.\n", score, level);
  return 0;
}
