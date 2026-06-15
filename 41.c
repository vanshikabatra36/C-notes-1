#include <stdio.h>

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= 10){
        printf("%d X %d = %d\n", num, i, num*i);
        i += 1;
    }

    return 0;
}