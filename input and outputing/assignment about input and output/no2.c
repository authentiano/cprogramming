#include <stdio.h>

int main(){
    float num;

    printf("Enter your weight in decimal: ");
    scanf("%f", &num);

    printf("You are: %.2f", num);

    return 0;
}