#include <stdio.h>

int main (){
    int number;
    printf("enter number: ");
    scanf("%d",&number);

    int abs = number > 0 ? number: -number;
    printf("%d is the absolute value",abs);

    return 0;
}