#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter second number: ");
    scanf("%d", &num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("first:%d, second:%d", num1, num2);

    return 0;
}