#include <stdio.h>

int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if (age > 60){
        printf("you are a senior citizen");
    }
    else if (age > 20){
        printf("you are an adult");
    }
    else if (age > 13){
        printf("you are a teen");
    }
    else{
        printf("you are a child");
    }

    return 0;
}