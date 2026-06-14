#include <stdio.h>

int main(){
    int numb;
    printf("enter number: ");
    scanf("%d",&numb);

    if (numb % 2 == 0 ){
        printf("even");
    }
    else {
        printf("odd");
    } 
    return 0;
}