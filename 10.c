#include <stdio.h>

int main(){
  const float PI = 3.14159;
  int radius;

  printf("enter radius ");
  scanf("%d",&radius);

  printf("the circumference of the circle is %f\n", 2*PI*radius);
  printf("the area of the circle is %f", PI*radius*radius);

  return 0;
}