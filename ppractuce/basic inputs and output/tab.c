#include <stdio.h>

int main(){
    printf("\\t");

    float num1, num2, sum;
    printf("\nEnter two numbers please: ");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    printf("\n The sum of %.2f and %.2f is %.f:\n", num1, num2, sum);

    return 0;
}