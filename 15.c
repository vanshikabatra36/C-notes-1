#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("enter first side: ");
    scanf("%d", &a);
    printf("enter second side: ");
    scanf("%d", &b);
    printf("enter third side: ");
    scanf("%d", &c);
    printf("enter fourth side: ");
    scanf("%d", &d);

    int perimeter = a+b+c+d;
    printf("perimeter is %d", perimeter);
}