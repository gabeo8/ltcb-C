/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <math.h>
//fflush(stdin) // Xoa dau Enter(Bo nho tam)


// Khai b�o c?u tr�c sinh vi�n g?m th�nh ph?n: 
//MSSV, H? T�N, NG�Y SINH, QU� QU�N, �I?M TRUNG B�NH T�CH LU?, �I?M R�N LUY?N.
typedef struct {
	char msSV[10];
	char hoTen[50];
	char ngaySinh[20]; //14/2/1990
	double dTBTL;
	int dRL;
} sinhVien;

// In thong tin Sinh Vien
void inSinhVien(sinhVien sv) {
	printf("Thong tin sinh vien thu \n");
	printf("MSSV: %s\n", sv.msSV);
	printf("Ho va ten: %s\n", sv.hoTen);
	printf("Ngay sinh (dd/mm/yyyy): %s\n", sv.ngaySinh);
	printf("Diem trung binh tich luy: %.2fl\n", sv.dTBTL); fflush(stdin);
	printf("Diem ren luyen: %d\n", sv.dRL); fflush(stdin);
}

int main() {
//	// Khai b�o m?ng c?u tr�c d? qu?n l� l?p g?m N sinh vi�n.
//	sinhVien sv1;
//	printf("Nhap du lieu cho sinh thu 1 \n");
//	printf("Nhap MSSV: "); gets(sv1.msSV);
//	printf("Nhap Ho va ten: "); gets(sv1.hoTen);
//	printf("Nhap Ngay sinh (dd/mm/yyyy): "); gets(sv1.ngaySinh);
//	printf("Nhap Diem trung binh tich luy: "); scanf("%lf", &sv1.dTBTL);
//	printf("Nhap Diem ren luyen: "); scanf("%d", &sv1.dRL);
//	
//	// In thong tin sinh vien'
//	inSinhVien(sv1);
//	
	int n=2;
	
	sinhVien lop[n];
	// Nh?p th�ng tin c?a n sinh vi�n.
	for(int i=0;i<n;i++){
		printf("Nhap du lieu cho sinh thu %d \n", i);
		printf("Nhap MSSV: "); gets(lop[i].msSV);
		printf("Nhap Ho va ten: "); gets(lop[i].hoTen);
		printf("Nhap Ngay sinh (dd/mm/yyyy): "); gets(lop[i].ngaySinh);
		printf("Nhap Diem trung binh tich luy: "); scanf("%lf", &lop[i].dTBTL); fflush(stdin);
		printf("Nhap Diem ren luyen: "); scanf("%d", &lop[i].dRL); fflush(stdin);
	}
	
	// In thong tin sinh vien'
	for (int j=0;j<n;j++){
		printf("------------*---------\n");
		inSinhVien(lop[j]);
	}
	return 0;
}




