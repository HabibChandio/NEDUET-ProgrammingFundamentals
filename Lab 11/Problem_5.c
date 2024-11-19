#include <stdio.h>

void sortFunction(int* arr, int* size, int order);

int main(){
    int size = 10;
    int arr[] = {12, 45, 23, 67, 34, 89, 56, 78, 90, 33};
    sortFunction(arr, &size, 2);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void sortFunction(int* arr, int* size, int order){
    int temp;
    if(order == 1){
        for(int i = *size; i > 0; i--){
            for(int j = 0; j < i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else if(order == 2){
        for(int i = *size; i > 0; i--){
            for(int j = 0; j < i - 1; j++){
                if(arr[j] < arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else
        printf("???????");
}