#include<stdio.h>
int main(){
    int a = 100;
    // The exit from the loop is controlled by the condition
    // Exit Controlled Loop
    // The do-while loop exxecutes at lest once before checking
    // the condition
    do{
        // statements
        printf("%d ", a);
        a++; 
    }while (a < 50);
    return 0;
}