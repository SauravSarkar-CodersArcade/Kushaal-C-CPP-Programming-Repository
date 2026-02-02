#include<stdio.h>
void show(int a){
    a = a + 5;
    printf("a inside show = %d\n", a);//2-15 
}
int main(){
    int a = 10;
    printf("a inside main before show = %d\n", a); // 1-10
    show(a); // Only a copy of it is going there
    printf("a inside main after show = %d\n", a);//3-10
    return 0;    
}