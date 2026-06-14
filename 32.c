#include <stdio.h>

int main(){
    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }
    while (i <= 10);

    int num;
    do{
        printf("enter number: ");
        scanf("%d", &num);
    }
    while (num != 10);
    printf("you guessed the correct number");
    return 0;
}