/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <math.h>

void swap(int a, int b, int c) {
  a = b;
  b = c;
  c = a;
  
  // print a, b
  printf("a = %d b = %d c = %d\n", a, b, c); 
}

int main() {
	int x, y, z;
	// Nhap x, y;
	printf("Nhap x: "); scanf("%d", &x);
	printf("Nhap y: "); scanf("%d", &y);
	printf("Nhap z: "); scanf("%d", &z);
	
	//print x , y
	printf("x = %d \ny = %d \nz = %d\n", x, y, z);
	
	// Goi tu ham swap
	printf("* Goi ham swap: \n");
	swap(x, y, z);
	
//////	// Sau khi goi ham swap
	printf("* Sau khi goi ham swap: \n");
//////	//print x , y, z
	printf("x = %d y = %d z = %d \n", x, y, z);
		
	return 0;
}
