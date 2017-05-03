#include <stdio.h>

// tinh tong cua n so nhap tu ban phim

int main() {
	int n, arr[100];
	printf("nhap n = "); scanf("%d", &n);
	// Nhap phan tu vao mang
	for (int i = 0; i < n; i++) {
		printf("Nhap gia tri thu %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	
	
	// in phan tu trong mang
	printf("Cac gia tri trong mang: ");
	for (int i = 0; i < n; i++) {
		printf("%d   ", arr[i]);
	}
	// tinh tong
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i]; 
	}
	printf("\nTong cua %d so ban nhap la %d", n, sum);

	return 0;
}
