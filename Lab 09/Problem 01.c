#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void countFrequency(int* array, int arraySize);

int main(){
	int size;
	printf("Enter the size of the randomized array: ");
	scanf("%d", &size);
	int array1[size];
	for(int i = 0; i < size; i++){
		array1[i] = rand() % 11;
	}
	countFrequency(array1, size);
	return 0;
}

void countFrequency(int* array, int arraySize){
	int freq[arraySize];
	for(int i = 0; i < arraySize; i++){
		freq[i] = 1; 
	}
	for(int i = 0; i < arraySize; i++){
		for(int j = i + 1; j < arraySize; j++){
			if(array[i] == array[j]){
				for(int k = j; k < arraySize - 1; k++){
					array[k] = array[k+1];
				}
				freq[i]++;
				j--;
				arraySize--;
			}
		}
	}
	for(int i = 0; i < arraySize; i++){
		printf("%d: %d time(s)\n", array[i], freq[i]);
	}
}