#include <stdio.h>

int main(){
    float P,R,T;

    printf("enter principal: ");
    scanf("%f", &P);
    printf("enter rate: ");
    scanf("%f", &R);
    printf("enter time: ");
    scanf("%f", &T);

    float interest = (P * R * T) /100;

    printf("simple interst is: %.2f", interest);
    return 0;
}