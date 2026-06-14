#include <stdio.h>
#include <math.h>
int main(){
    float P,R,T;

    printf("enter principal: ");
    scanf("%f", &P);
    printf("enter rate: ");
    scanf("%f", &R);
    printf("enter time: ");
    scanf("%f", &T);

    float interest = P * pow((1 + R/100), T);

    printf("compound interst is: %.2f", interest);
    return 0;
}