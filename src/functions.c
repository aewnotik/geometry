#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions" 

  void Scan(float x1, float y1, float r1, float x2, float y2, float r2) {
    
    printf("Circle #1: ");
    scanf("%f%f%f", &x1, &y1, &r1);
  
    printf("\n\nCircle #2: ");
    scanf("%f%f%f", &x2, &y2, &r2);
  
    }

  void Print() {
    
    printf("\n\n 1. Circle(%.2f %.2f, %.2f)", x1, y1, r1);
    printf("\n Perimetr is %.2f", 2*3.14*r1);
    printf("\n Area is %.2f\n", 3.14*r1*r1);

    if (dist <= r)
        printf("Intersects: \n Circle #2");
    else
        printf("No intersects");

    printf("\n\n 2. Circle(%.2f %.2f, %.2f)", x2, y2, r2);
    printf("\n Perimetr is %.2f", 2*3.14*r2);
    printf("\n Area is %.2f\n", 3.14*r2*r2);


    if (dist <= r)
        printf("Intersects: \n Circle #2");
    else
        printf("No intersects");

    
