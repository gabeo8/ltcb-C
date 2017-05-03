#include <stdio.h>

// Binary Search 
// return locate
// Giai thuat

#include <stdio.h>
 
// A iterative binary search function. It returns location of x in
// given array arr[l..r] if present, otherwise -1
int BiSearch(int arr[100], int x, int n){
	int l = 0;
	int r = n-1;
	while (l <= r){
    	int m = l + (r-l)/2;
 	    if (arr[m] == x) 
    	    return m;  
 		if (arr[m] < x) 
        	l = m + 1; 
 	    else
         	r = m - 1; 
  	}
 	
	return -1; 
}
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[100], int n) {
	for (int i = 0; i <= n-2; i++)
		for (int j = n-1; j >= i+1; j--)
			if (arr[j] < arr[j-1])
				swap(&arr[j], &arr[j-1]);
}

int main() {
	int n, arr[100], X;
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
	// Ham bubbleSort
	bubbleSort(arr, n);
	// In mang da sap xep
	printf("\n\nMang da duoc sap xep bang BUBBLE SORT: ");
	for (int i = 0; i < n; i++) {
		printf("%d   ", arr[i]);
	}
	
	printf("\n\nNhap phan tu ban muon tim X =  "); scanf("%d", &X);
	int vitri = BiSearch(arr, X, n);
	if (vitri == -1) {
		printf("\n%d khong ton tai trong mang\n", X);
	} else {
		printf("\n%d ton tai trong mang tai vi tri thu %d\n", X, vitri+1);
	}
	
	return 0;
}
