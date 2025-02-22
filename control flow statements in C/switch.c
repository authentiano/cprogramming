#include <stdio.h>
int main(){

    int choice;

    printf("Enter your choice please between 1-3: \n");
    scanf("%d", &choice);

    // the switch condition

    switch(choice){
        case 1:
            printf("You selected option 1 \n");
        break;

        // second case
        case 2:
            printf("You selected option 2\n");

        break;

        // third case
        case 3:
        printf("You selected option 3\n ");
        break;
        
        default:
            printf("you have entered an invaalid choice\n");

    }

    // switch

    int day;

    printf("Enter the day you: \n");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        printf("Its MOnday \n");
        break;

        case 2:
            printf("its tuesday \n");
            break;
        
        case 3:
            printf("its a wednesday");
            break;

        case 4:
            printf("Its a Thursday \n");
            break;
        
        case 5:
            printf("Its a Friday \n");
            break;
        
        case 6:
            printf("Its a Saturday \n");
        
        default:
            printf("It's a Sunday Man");
    }

return 0;
}
