#include <stdio.h>

int main(){

    int num = 0;
    while (num != 10){
        printf("enter number: ");
        scanf("%d", &num);
    }
    printf("you guessed the correct number");
    return 0;
}