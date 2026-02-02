#include<stdio.h>
void C(){
    printf("Inside C\n"); // 3
}
void B(){
    printf("Inside B\n"); // 2
    C();
}
void A(){
    printf("Inside A\n"); // 1
    B();
}
int main(){
    A();
    return 0;
}