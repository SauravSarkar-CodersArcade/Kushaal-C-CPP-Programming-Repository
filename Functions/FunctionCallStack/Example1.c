#include<stdio.h>
void fun1(){
    printf("Inside func1\n"); // 3
}
void fun2(){
    printf("Inside func2\n"); // 2
    fun1();
    printf("Back in func2\n"); // 4
}
int main(){
    printf("Start Main\n"); // 1
    fun2();
    printf("End Main\n"); // 5
}