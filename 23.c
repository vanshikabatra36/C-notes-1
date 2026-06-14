#include <stdio.h>

int main(){
    float f;

    printf("enter temp in F: ");
    scanf("%f", &f);
    

    float C = (f-32) * 5/9;

    printf("temp in celsius is: %.2f", C);
    return 0;
}