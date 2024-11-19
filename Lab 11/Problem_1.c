#include <stdio.h>

int main(){
    long int value1 = 200000, value2;
    long int *ptr = &value1;
    printf("%ld\n", *ptr);
    value2 = *ptr;
    printf("%ld\n", value2);
    printf("%p\n", &value1);
    printf("%p\n", ptr);
    return 0;
}