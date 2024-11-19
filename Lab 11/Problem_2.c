#include <stdio.h>

void swap(int* a, int* b, int* c);
int main(){
    int a = 1, b = 2, c = 3; 
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    swap(&a, &b, &c);
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    return 0;
}

void swap(int* a, int* b, int* c){
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}