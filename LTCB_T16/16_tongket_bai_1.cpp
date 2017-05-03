#include <stdio.h>

// Selection Sort 
// Giai thuat
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[100], int n) {
	for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; j++){
			if (arr[j] < arr[i]) {
				swap(&arr[j], &arr[i]);
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
	selectionSort(arr, n);
	// In mang da sap xep
	printf("\n\nMang da duoc sap xep bang SELECTION SORT: ");
	for (int i = 0; i < n; i++) {
		printf("%d   ", arr[i]);
	}
		
	return 0;
}
