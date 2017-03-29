/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <malloc.h>
#include <string.h>
//1. Tao 1 cau truc Sinhvien co the luu tru thong tin cua mot SV bao gom:
//  MSSV, ho ten, lop, so TC tích luy, diem TB tích luy.
typedef struct {
	char msSV[10];
	char hoTen[50];
	char lop[50];
	int soTCTL;
	double diemTBTL;
} Sinhvien;

// In thong tin sinh vien
void inSinhVien(Sinhvien sv) {
	printf("MSSV: %s\n", sv.msSV);
	printf("Ho ten: %s\n", sv.hoTen);
	printf("Lop: %s\n", sv.lop);
	printf("So tin chi tich luy: %d\n", sv.soTCTL); fflush(stdin);
	printf("Diem trung binh tich luy: %lf\n", sv.diemTBTL); fflush(stdin);
	// Xep loai
	if (sv.diemTBTL>=3.60) printf("Xep loai: Xuat sac\n");
	if (sv.diemTBTL>=3.20 && sv.diemTBTL<=3.59) printf("Xep loai: Gioi\n");
	if (sv.diemTBTL>=2.50 && sv.diemTBTL<=3.19) printf("Xep loai: Kha\n");
	if (sv.diemTBTL>=2.00 && sv.diemTBTL<=2.49) printf("Xep loai: Trung binh\n");
	if (sv.diemTBTL<=1.99) printf("Ban khong du dieu kien tot nghiep\n");
}

int main() {
	//2. Nhap so sinh vien
	int n;
	printf("Nhap so sinh vien n = "); scanf("%d", &n); fflush(stdin);
	
	//3. Tao mot mang dong gom n phan tu kieu Sinhvien
	Sinhvien *arrSV;
	arrSV = (Sinhvien*) malloc(n*sizeof(Sinhvien));
	
	//4. Nhap thong tin cho cac sinh vien
	for (int i=0;i<n;i++) {
		printf("--------*+*--------\n");
		printf("Nhap thong tin cho sinh vien thu %d \n", i+1);
		printf("MSSV: "); gets(arrSV[i].msSV);
		printf("Ho ten: "); gets(arrSV[i].hoTen);
		printf("Lop: "); gets(arrSV[i].lop);
		printf("So tin chi tich luy: "); scanf("%d", &arrSV[i].soTCTL); fflush(stdin);
		printf("Diem trung binh tich luy: "); scanf("%lf", &arrSV[i].diemTBTL); fflush(stdin);
	}
	// Sap xep diem trung binh tang dan
	double k;
	for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if ( arrSV[i].diemTBTL > arrSV[j].diemTBTL ) {
                k = arrSV[i].diemTBTL;
                arrSV[i].diemTBTL = arrSV[j].diemTBTL;
                arrSV[j].diemTBTL = k; 
            }
        }
    }
  
	//5. In Sinh vien co diem cao nhat va thap nhat
	printf("\n-----------Max-*-Min--------\n");
	printf("Sinh vien co diem TB cao nhat \n");
	inSinhVien(arrSV[n-1]);
	printf("\n------------*---------\n");
	printf("Sinh vien co diem TB thap nhat \n");
	inSinhVien(arrSV[0]);
	printf("\n---------*-E-N-D-*------\n\n");

	//6. Cho phep nguoi dung them vao m SV voi m nhap tu ban phim 
	int m;
	printf("Nhap so sinh vien muon them m = "); scanf("%d", &m); fflush(stdin);
	//bc 1: cap phat mang moi
	Sinhvien *newArrSV;
	newArrSV = (Sinhvien*) malloc(m*n*sizeof(Sinhvien));
	//bc 2: copy du lieu mang cu
	memcpy(newArrSV, arrSV, m*n*sizeof(Sinhvien)); 
	//bc 3: xoa mang cu
	free(arrSV);
	//bc 4: nhap thong tin cho cac SV moi
	for (int i=n;i<m+n;i++) {
		printf("--------*+*--------\n");
		printf("Nhap thong tin cho sinh vien thu %d \n", i+1);
		printf("MSSV: "); gets(newArrSV[i].msSV);
		printf("Ho ten: "); gets(newArrSV[i].hoTen);
		printf("Lop: "); gets(newArrSV[i].lop);
		printf("So tin chi tich luy: "); scanf("%d", &newArrSV[i].soTCTL); fflush(stdin);
		printf("Diem trung binh tich luy: "); scanf("%lf", &newArrSV[i].diemTBTL); fflush(stdin);
	}
	
	printf("\n\n--------*-IN-SV-*---------\n");
	// In sinh vien
	for (int j=0;j<m+n;j++){
		printf("------------*---------\n");
		inSinhVien(newArrSV[j]);
	}
	
	free(newArrSV);
	
	return 0;
}
