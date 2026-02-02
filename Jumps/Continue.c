#include<stdio.h>
int main(){
    for(int i=1; i<5; i++){
        if(i == 3){
            continue; // This will skip if the current value matches & go to next value
        }
        printf("%d ", i);
    }
    return 0;
}