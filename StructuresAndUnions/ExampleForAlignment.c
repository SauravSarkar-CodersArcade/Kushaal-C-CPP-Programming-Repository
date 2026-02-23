#include<stdio.h>
struct Data {
    
    char c;
    double d;
    short s;
    int i;
    float f;
    /*
    [1 + 7 Bytes       ]
    [    8 Bytes       ]
    [ 2 + 4   + 2      ]  
    [ 4 + 4]    
    */
};
int main(){
    struct Data d;
    printf("Size of struct: %llu bytes.\n", sizeof(d));
    return 0;
}