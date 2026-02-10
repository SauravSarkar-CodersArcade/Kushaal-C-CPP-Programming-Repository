#include<stdio.h>
int main(){
    int arr[] = {9,1,3,6,10,-4,8,22,-3,5,42,183,2};
    // Formula to calculate the dynamic size
    // size_concept = 4x13 = 52 / 4 = 13
    int size = sizeof(arr) / sizeof(arr[0]);
    // To access an element at nth position -> arr[n-1]
    printf("First Element: %d\n", arr[0]);
    printf("Last Element: %d\n", arr[7]);

    // To access all elements we will use a for loop
    for(int i=0; i<size; i++){
        printf("Element at position %d = %d\n", i+1, arr[i]);
    }
    printf("\n");
    for(int i=0; i<size; i++){
        printf("Element at index %d = %d\n", i, arr[i]);
    }
    return 0;
}