#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the 5 numbers:\n");
    for(int i=0; i<5; i++){ // i -> 0 to 4
        scanf("%d", &arr[i]);
    }
    printf("The 5 array elements are: ");
    for(int i=0; i<5; i++){ // i -> 0 to 4
        printf("%d ", arr[i]);
    }
    int sum = 0;
    for(int i=0; i<5; i++){ // i -> 0 to 4
        sum += arr[i];
    }
    printf("\nSum = %d ", sum);
}