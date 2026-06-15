#include <stdio.h>

int main(){
    int first, second;
    printf("enter first number: ");
    scanf("%d", &first);
    printf("enter second number: ");
    scanf("%d", &second);

    int min = first < second ? first : second;
    printf("minimum of the two numbers is %d", min);

    return 0;
}