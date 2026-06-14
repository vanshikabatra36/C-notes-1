#include <stdio.h>

int main(){
    int first, second, third;
    printf("enter first number: ");
    scanf("%d",&first);
    printf("enter second number: ");
    scanf("%d",&second);
    printf("enter third number: ");
    scanf("%d",&third);
    
    if (first > second && first >third){
        printf("%d is the greatest.",first);
    }
    else if (second > third){
        printf("%d is the greatest",second);
    }
    else{
        printf("%d is the greatest",third);
    }
    return 0;
}