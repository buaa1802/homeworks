#include <stdio.h>

int main()
{
    float fahrenheit, centigrade;
    printf("Please input a Fahrenheit degree: ");
    scanf("%f", &fahrenheit);
    centigrade = (fahrenheit - 32) * 5 / 9;
    printf("The degree of Fahrenheit is: %.2f, The degree of Centigrade is: %.2f.\n", fahrenheit, centigrade);
    return 0;
}