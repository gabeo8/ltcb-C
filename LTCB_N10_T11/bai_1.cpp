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
	
//	�ia chi, gi� tri v� k�ch thuoc cua bien a
	printf("Dia chi cua &a = %d, Gia tri cua a = %d, Kich thuoc cua sizeof(a) = %d\n", &a, a, sizeof(a));
//	�ia chi va gi� tri cua con tro p
	printf("Dia chi cua p = %d, Gia tri cua &p = %d\n", &p, &p);
//	Gi� tri v�ng nho m� p dang tro toi
	printf("Gia tri vung nho ma p dang tro toi *p = %d\n", *p);
//	Kich thuoc cua con tro p
	printf("Kich thuoc cua con tro sizeof(p) = %d\n", sizeof(p));
//	K�ch thuoc cua du lieu ma p dang tro toi
	printf("Kich thuoc cua du lieu ma p dang tro toi sizeof(*p) = %d\n", sizeof(*p));
	
	printf("------++------\n\n");
	*p = 15;
	//	�ia chi, gi� tri v� k�ch thuoc cua bien a
	printf("Dia chi cua &a = %d, Gia tri cua a = %d, Kich thuoc cua sizeof(a) = %d\n", &a, a, sizeof(a));
//	�ia chi va gi� tri cua con tro p
	printf("Dia chi cua p = %d, Gia tri cua &p = %d\n", &p, &p);
//	Gi� tri v�ng nho m� p dang tro toi
	printf("Gia tri vung nho ma p dang tro toi *p = %d\n", *p);
//	Kich thuoc cua con tro p
	printf("Kich thuoc cua con tro sizeof(p) = %d\n", sizeof(p));
//	K�ch thuoc cua du lieu ma p dang tro toi
	printf("Kich thuoc cua du lieu ma p dang tro toi sizeof(*p) = %d\n", sizeof(*p));
	
	return 0;
}
