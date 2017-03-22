/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <math.h>

void swap(int *a, int *b) {
  int tam;
  tam = *a;
  *a = *b;
  *b = tam;
  // print a, b
  printf("a = %d \nb = %d\n", a, b);
  // print &a, &b
  printf("&a = %d \n&b = %d\n", &a, &b);
  // print *a, *b
  printf("*a = %d \n*b = %d\n\n", *a, *b);
  
}

int main() {
	int x, y;
	// Nhap x, y;
	printf("Nhap x: "); scanf("%d", &x);
	printf("Nhap y: "); scanf("%d", &y);
	
	//print x , y
	printf("x = %d \ny = %d\n", x, y);
	
	//print &x , &y
	printf("&x = %d \n&y = %d\n\n", &x, &y);
	
	// goi ham swap
	printf("* Goi ham swap: \n");
	swap(&x, &y);
	
	// Sau khi goi ham swap
	printf("* Sau khi goi ham swap: \n");
	//print x , y
	printf("x = %d \ny = %d\n", x, y);
	
	//print &x , &y
	printf("&x = %d \n&y = %d\n", &x, &y);
		
	return 0;
}
