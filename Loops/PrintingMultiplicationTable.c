#include<stdio.h>
int main(){
    // As long as the inner j variable doesn't complete one full iteration (j=1-10);
    // The i value is stuck at i=1
    // i=1 - j=1-10, i=2 - j=1-10 & so on
    for(int i=1; i<=10; i++){ // i = 1
        for(int j=1; j<=10; j++){
            // 1x1=1
            printf("%dx%d=%d\t", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}