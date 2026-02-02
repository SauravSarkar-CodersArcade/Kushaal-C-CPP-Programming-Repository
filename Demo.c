#include<stdio.h>
int main(){
    printf("Kushaal's First Session\n");
    int a = 10;
    printf("%d\n", a);
    printf("%i\n", a);
    float f = 2.5;
    printf("%0.2f\n", f);
    char letter = 'A';
    printf("%d\n", letter);
    printf("%d\n", 'A'-'a');
    printf("The size of integer is %d bytes.\n", sizeof(a));
    printf("The size of character is %d bytes.\n", sizeof(letter));
    printf("The size of float is %d bytes.\n", sizeof(f));
    return 0;
}