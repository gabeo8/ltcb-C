#include <stdio.h>

// Tim uoc chung lon nhat cua 2 so a, b
// giai thuat euclid

// UCLN(a, b) = {b neu a%b==0, UCLN(b, r) neu a%b != 0}

// UCLN(91, 287) = UCLN(91, 14) = UCLN(14, 7) = UCLN(7, 0) = 7

int UCLN(int a, int b) {
	if (a%b == 0) return b;
	return UCLN(b, a%b);
}
int main() {
	int a, b;
	printf("Nhap a = "); scanf("%d", &a);
	printf("Nhap b = "); scanf("%d", &b);
	printf("\n\nUoc chung lon nhat cua (%d, %d) la %d", a, b, UCLN(a, b));
	return 0;
}
