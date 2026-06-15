#include <stdio.h>

int main (){
    int number;
    printf("enter number: ");
    scanf("%d",&number);

    number > 80 ? printf("high")
                : (number >= 50 ? printf("moderate") 
                                : printf("low"));


    return 0;
}