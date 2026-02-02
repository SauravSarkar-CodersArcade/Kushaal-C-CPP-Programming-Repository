#include<stdio.h>
void fun(){
    int x = 20;
    printf("x inside func = %d\n", x); // 2
}
int main(){
    int x = 10;
    printf("x inside main = %d\n", x); // 1
    fun();
    return 0;    
}