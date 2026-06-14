#include <stdio.h>

int main(){
    float num1, num2;
    printf("enter first number: ");
    scanf("%f", &num1);

    printf("enter second number: ");
    scanf("%f", &num2);

    float result = num1 * num2;
    printf("product is: %f", result);
}