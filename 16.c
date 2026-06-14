#include<stdio.h>

int main(){
    int age;
    char is_indian;
    printf("enter age: ");
    scanf("%d",&age);
    printf("indian? [Y/N]: ");
    scanf(" %c",&is_indian);
    
    if (is_indian == 'Y') {
        if (age <= 18 || age >= 80) {
            printf("you are not elgible for license");
        } 
        else {
            printf("you are eligible");
        }
    }
    else{
        printf("only indians can apply");
    }

    
}