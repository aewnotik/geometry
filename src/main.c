#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

int main() {
  float x1, y1, r1, x2, y2, r2, r;
  float dist;

  Scan(x1, y1, r1, x2, y2, r2);
  
  dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  
  r = r1+r2;

  Print();
  return 0;
}
