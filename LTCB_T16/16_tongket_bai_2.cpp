#include <stdio.h>

// Bubble Sort 
// Giai thuat
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[100], int n) {
	for (int i = 0; i <= n-2; i++){
		for (int j = n-1; j >= i+1; j--){
			if (arr[j] < arr[j-1]) {
				swap(&arr[j], &arr[j-1]);
			}
		}
	}
}

int main() {
	int n, arr[100];
	printf("nhap n = "); scanf("%d", &n);
	// Nhap phan tu vao mang
	for (int i = 0; i < n; i++) {
		printf("Nhap gia tri thu %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	
	// In phan tu trong mang
	printf("\nMang chua duoc sap xep: ");
	for (int i = 0; i < n; i++) {
		printf("%d   ", arr[i]);
	}
	// Ham seclectionSort
	bubbleSort(arr, n);
	// In mang da sap xep
	printf("\n\nMang da duoc sap xep bang BUBBLE SORT: ");
	for (int i = 0; i < n; i++) {
		printf("%d   ", arr[i]);
	}
		
	return 0;
}
