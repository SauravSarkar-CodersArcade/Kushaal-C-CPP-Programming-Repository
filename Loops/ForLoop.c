#include<stdio.h>
int main(){
    for(int i=10; i<21; i++){
        printf("%d ", i);
    }
    printf("\n");
    for(int i=10; i<20; i+=2){
        printf("%d ", i);
    }
    printf("\n");
    for(int i=20; i>0; i--){
        printf("%d ", i);
    }
    printf("\n");
    for(int i=20; i>0; i-=2){
        printf("%d ", i);
    }
    return 0;
}