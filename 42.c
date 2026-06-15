#include <stdio.h>

int main(){
    int N;
    printf("enter number: ");
    scanf("%d",&N);

    int i = 1;
    int sum = 0;
    while (i <= N){
        sum += i;
        i += 2;
    }
    printf("the sum of all odd numbers upto %d is %d", N, sum);


    return 0;
}