#include <stdio.h>

#define PI 3.14

int main() 
{
  float circleArea, circleRadius;
  
  printf("Enter radius: ");
  scanf("%f", &circleRadius);

  if(circleRadius <= 0) {
    printf("Radius must be positive\n");
    return 1;
  }

  circleArea = PI * circleRadius * circleRadius;

  printf("Radius: %.3f\n", circleRadius);
  printf("Area: %.3f\n", circleArea,2);

  return 0;
}
