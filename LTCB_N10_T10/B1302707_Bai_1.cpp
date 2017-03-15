/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <math.h>
//fflush(stdin) // Xoa dau Enter(Bo nho tam)

// Khai b�o c?u tr�c Diem2D c� t?a d? x v� y l� ki?u s? nguy�n.
typedef struct {
	int x;
	int y;
}Diem2D;

//Vi?t h�m con inDiem in th�ng tin c?a m?t di?m 2 chi?u, 
//v?i tham s? d?u v�o l� 1 bi?n c� c?u tr�c Diem2D.
void inDiem(Diem2D A) {
	printf("Diem la: (%d,%d)\n", A.x, A.y);
}

//Vi?t h�m con khoangcach d? t�nh kho?ng c�ch gi?a 2 di?m
// v?i tham s? d?u v�o l� 2 bi?n c� ki?u Diem2D. 
//K?t qu? tr? v? l� kho?ng c�ch gi?a 2 di?m, ki?u double.
double khoangcach(Diem2D A, Diem2D B) {
	// CT khoang cach doan thang
	// sqrt((x1-x2)^2+(y1-y2)^2)
	return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}

int main() {
	// Khai b�o 2 bi?n D1,D2 c� ki?u c?u tr�c Diem2D.
	Diem2D D1, D2;
	
	// Nh?p gi� tr? cho D1, D2
	//D1
	printf("Nhap gia tri x cho D1: "); scanf("%d", &D1.x);
	printf("Nhap gia tri y cho D1; "); scanf("%d", &D1.y);
	//D2
	printf("Nhap gia tri x cho D2: "); scanf("%d", &D2.x);
	printf("Nhap gia tri y cho D2: "); scanf("%d", &D2.y);
		
//	// Khai bao truc tiep
//	D1 ={1,2};
//	D2={5,5};
	
	// In th�ng tin D1 v� D2
	inDiem(D1);
	inDiem(D2);
	
	// In kho?ng c�ch gi?a 2 di?m D1 v� D2
	printf("Khoang cach giua 2 diem la %.2lf", khoangcach(D1, D2));
		
	return 0;
}




