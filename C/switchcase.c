#include <stdio.h>

int main() {
    int day;

    do {
        printf("Enter a number (1-7) to get the day of the week (0 to exit): ");
        scanf("%d", &day);

        switch(day){
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid day. Please try again.\n");
        }

    } while(day != 0);

    return 0;
}
