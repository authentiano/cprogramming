#include <stdio.h>
int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;

    for(int i = 0; i < 6; i++){
        sum += i;
        printf("The sum is: %d \n", sum);
    }
}