/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <malloc.h>

// Hoan doi
void swap(int *x, int *y) {
	int tam;
	tam = *x;
	*x = *y;
	*y = tam;
}
// a: max, b: ,c:min
// [5,6,1] a=5,b=6,c=1
// 5<1
// 5<6 => a=6,b=5
// 5<1
// => a=6;b=5;c=1 <- OK

void sort(int *a, int *b, int *c) {
	if (*a<*c) swap(a,c);
	if (*a<*b) swap(a,b);
	if (*b<*c) swap(b,c);
	//printf("a = %d b = %d c = %d \n", *a,*b,*c);
}
int main() {
	
	// Khoi tao mang kieu int va nhap gia tri cho mang
	int arr[3];
	for (int i=0;i<3;i++) {
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	// Goi ham sort()	
	sort(&arr[0],&arr[1],&arr[2]);
	
	// In gia tri trong mang sau khi goi ham sort()
	printf("Mang sau khi goi ham sort()\n");
	for (int i=0;i<3;i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
