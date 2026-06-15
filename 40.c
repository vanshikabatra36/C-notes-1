#include <stdio.h>

int main(){
    float first, second;
    char opr;
    printf("enter first number: ");
    scanf("%f",&first);
    printf("enter second number: ");
    scanf("%f",&second);
    printf("enter the operator: ");
    scanf(" %c", &opr);

    float result;
    int invalid = 0;
    switch (opr)
    {
    case '+': result = first + second;
        break;
    case '-': result = first - second;
        break;
    case '*': result = first * second;
        break;
    case '/': result = first / second;
        break;
    
    default: 
        invalid = 1;      
        break;
    }

    
    if (invalid == 0){
        printf("result is %.2f", result);
    }
    else{
        printf("Invalid operator, enter + - * /");
    }
        
    return 0;
}