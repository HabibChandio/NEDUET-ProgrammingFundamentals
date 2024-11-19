#include <stdio.h>

int main(){
    float arr[20] = {0.32, 4.56, 1.29, 5.67, 9.01, 2.45, 7.89, 3.14, 8.67, 6.28, 0.76, 1.98, 4.43, 7.12, 3.78, 5.89, 2.01, 9.34, 6.78, 8.45};
    float highest = 0.00;
    int index = 0;
    for(int i = 0; i < 20; i++){
        if(*(arr + i) > highest){
            highest = *(arr + i);
            index = i;
        }
    }
    highest = 0.00;
    for(int i = 0; i < 20; i++){
        if(*(arr + i) > highest && i != index){
            highest = *(arr + i);
        }
    }
    printf("%f", highest);
    return 0;
}