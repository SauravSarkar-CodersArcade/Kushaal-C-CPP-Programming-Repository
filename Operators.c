#include<stdio.h>
#include<stdbool.h> // This is needed for boolean data type 
enum boolean {
    t=1, f=0
};
enum weekdays {
    mon, tue, wed=3, thu, fri, sat, sun
};
int main(){
    printf("%d\n", 10%3);
    printf("%d\n", 9%3);
    printf("%d\n", 10%15);
    printf("%d\n", 10*2-1+3%4); // PEDMAS or BODMAS
    printf("%d\n", 10 == 10);
    bool status = false; // No default boolean in C Language
    // We need to use a header file
    printf("%d\n", status);
    enum boolean d = t;
    printf("%d\n", d);
    enum weekdays day = tue;
    printf("The day is the %dth day of the week.\n", day);
    printf("The size of an enum is %d bytes.\n", sizeof(day));
    // Unary Operators
    int x = 10;
    int y = 20;
    printf("%d\n", ++x + ++y); // 32
    printf("x=%d, y=%d\n", x,y); // 11 + 21
    printf("%d\n", x-- + y--); //  32
    printf("x=%d, y=%d\n", x,y); // 10 20
    printf("%d\n", ++x + --y); // 11 + 19
    int time = 17;
    // Condition ?     trueValue        :   falseValue          ;
    (time > 12) ? printf("After 12 PM") : printf("Before 12 PM");

    return 0;
}