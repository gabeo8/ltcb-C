/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <malloc.h>

int countEven(int *arr, int n){
	int count;
	for(int i=0;i<n;i++){
		if (*(arr+i)%2==0) count++;
	}
	return count; 
}

int main() {
	int *p;
	int n;
	printf("Nhap n = "); scanf("%d", &n);
	p = (int*)malloc(n*sizeof(int));
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:  ", i+1); scanf("%d", p+i);
	}
	printf("So phan tu chan trong mang la %d", countEven(p,n));
	return 0;
}
