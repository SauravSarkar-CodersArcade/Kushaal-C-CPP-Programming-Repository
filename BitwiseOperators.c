#include<stdio.h>
int main(){
    // int & int = (Binary operation of bits) = result in int
    printf("%d\n", 7 & 8);
    printf("%d\n", 5 & 6);
    printf("%d\n", 10 | 3);
    printf("%d\n", 4 ^ 11);

    // Bitwise NOT
    printf("%d\n", ~500); // n = 500 => -500 - 1 = -501
    printf("%d\n", ~-499); // -(-499) - 1 = 499 - 1 = 498

    int num; // 0x20000 = (user_input)
    printf("Enter the number to be checked:\n");
    scanf("%d", &num); 
    ((num & (num - 1)) == 0) ? printf("%d is a power of 2.\n", num) : printf("%d is not a power of 2.\n", num); 
    return 0;
}