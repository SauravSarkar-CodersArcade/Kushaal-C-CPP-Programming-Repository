#include<stdio.h>
int main(){
    int arr[3][3] = {{2, 3, 4},  // r0
                     {4, 5, 6},  // r1
                     {9, 8, 7}}; // r2
                //    c0 c1 c2
                
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }            
}