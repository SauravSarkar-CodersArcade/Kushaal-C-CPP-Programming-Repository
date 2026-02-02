#include<stdio.h>
int main(){
    int day = 20;
    switch (day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tueday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid Day");
    }
    return 0;
}