#include "max_product.h"

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int max_pairwise_product_fast(int *arr, int size){
	int index = 0; 

	for (int i = 1; i < size; i++){
		if (arr[i]>arr[index]){
			index = i;
		}
	}
	swap(&arr[index], &arr[size-1]);

	index = 0;
	for (int i = 1; i < size - 1; i++){
		if (arr[i]>arr[index]){
			index = i;
		}
	}
	swap(&arr[index], &arr[size-2]);

	return arr[size-2]*arr[size-1];

}



