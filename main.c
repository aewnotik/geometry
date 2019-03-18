#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
  float x1, y1, r1, x2, y2, r2, r;
  float dist;

  printf("Circle #1: ");
  scanf("%f%f%f", &x1, &y1, &r1);
  
  printf("\n\nCircle #2: ");
  scanf("%f%f%f", &x2, &y2, &r2);

  dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  r = r1+r2;


  printf("\n\n 1. Circle(%.2f %.2f, %.2f)", x1, y1, r1);
  printf("\n Perimetr is %.2f", 2*3.14*r1);
  printf("\n Area is %.2f\n", 3.14*r1*r1);

  if (dist <= r)
    printf("Intersects: \n Circle #2");
  else
    printf("No intersects");

  printf("\n\n 1. Circle(%.2f %.2f, %.2f)", x2, y2, r2);
  printf("\n Perimetr is %.2f", 2*3.14*r2);
  printf("\n Area is %.2f\n", 3.14*r2*r2);

  if (dist <= r)
    printf("Intersects: \n Circle #1");
  else
    printf("No intersects");

  return 0;

}
