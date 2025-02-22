#include <stdio.h>
int main(){

    int num;

    // prompting the user to capture the number
    printf("Enter any number please: ");
    scanf("%d", &num);

    if(num > 8){
        printf("the number is greater than 7 \n");
        
        if(num % 2 == 0){
            printf("The number is even \n");
        }else{
            printf("The number is odd \n");
        }
    } else if (scanf("%d", &num) != 1) {
        printf("The input is not an integer \n");
    }else{
        printf("The number is less than 8 \n");
    }

    return 0;
}