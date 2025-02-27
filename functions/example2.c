#include<stdio.h>
// declaring a function

void my_calculator(){
    int num1;
    int num2;
    int sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = (num1 + num2);
    printf("sum: %d", sum);

}

int main(){
    my_calculator();
    return 0;
} 