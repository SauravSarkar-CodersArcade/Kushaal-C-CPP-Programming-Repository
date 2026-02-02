#include<stdio.h> // DRY - Don't Repeat Yourself
int main(){
    int day = 7; // 1,2,3,4,5 - Weekday 6,7 - Weekend
    switch (day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("Weekday");
        break;
        case 6:
        case 7:
        printf("Weekend");
        break;
        default:
        printf("Invalid Day");
    }
    return 0;
}