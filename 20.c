#include <stdio.h>

int main(){
    int b, h;
    printf("enter breadth: ");
    scanf("%d", &b);
    printf("enter height: ");
    scanf("%d", &h);

    float area;
    area = 0.5 * b * h;

    printf("area of triangle is: %.2f",area);

    return 0;

}