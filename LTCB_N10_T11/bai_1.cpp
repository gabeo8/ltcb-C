/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <math.h>

int main() {
	int a = 10;
	int *p;
	p = &a;
	
//	Ðia chi, giá tri và kích thuoc cua bien a
	printf("Dia chi cua &a = %d, Gia tri cua a = %d, Kich thuoc cua sizeof(a) = %d\n", &a, a, sizeof(a));
//	Ðia chi va giá tri cua con tro p
	printf("Dia chi cua p = %d, Gia tri cua &p = %d\n", &p, &p);
//	Giá tri vùng nho mà p dang tro toi
	printf("Gia tri vung nho ma p dang tro toi *p = %d\n", *p);
//	Kich thuoc cua con tro p
	printf("Kich thuoc cua con tro sizeof(p) = %d\n", sizeof(p));
//	Kích thuoc cua du lieu ma p dang tro toi
	printf("Kich thuoc cua du lieu ma p dang tro toi sizeof(*p) = %d\n", sizeof(*p));
	
	printf("------++------\n\n");
	*p = 15;
	//	Ðia chi, giá tri và kích thuoc cua bien a
	printf("Dia chi cua &a = %d, Gia tri cua a = %d, Kich thuoc cua sizeof(a) = %d\n", &a, a, sizeof(a));
//	Ðia chi va giá tri cua con tro p
	printf("Dia chi cua p = %d, Gia tri cua &p = %d\n", &p, &p);
//	Giá tri vùng nho mà p dang tro toi
	printf("Gia tri vung nho ma p dang tro toi *p = %d\n", *p);
//	Kich thuoc cua con tro p
	printf("Kich thuoc cua con tro sizeof(p) = %d\n", sizeof(p));
//	Kích thuoc cua du lieu ma p dang tro toi
	printf("Kich thuoc cua du lieu ma p dang tro toi sizeof(*p) = %d\n", sizeof(*p));
	
	return 0;
}
