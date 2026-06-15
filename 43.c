#include <stdio.h>

int main(){
    int N;
    printf("enter number: ");
    scanf("%d",&N);

    int i = 2;
    int factorial = 1;
    while(i <= N){
        factorial *= i;
        i++;
    }

    printf("the factorial of %d is %d", N, factorial);

    return 0;
}