#include <stdio.h>

int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);

    if (marks > 90){
        printf("you got A");
    }
    else if (marks > 75){
        printf("you got B");
    }
    else if (marks > 60){
        printf("you got C");
    }
    else if (marks > 30){
        printf("you got D");
    }
    else{
        printf("you got E");
    }

    return 0;
}