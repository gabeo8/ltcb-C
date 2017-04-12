/*
	Ho ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>

// 1. Tao cau truc
typedef struct {
	char *MSSV;
	char *Hoten;
	char *lop;
	int soTCTL;
	float dtbTL;
} Sinhvien;

// ham in thong tin sinh vien
void inSinhVien(Sinhvien sv) {
	printf("MSSV: %s\n", sv.MSSV);
	printf("Ho ten: %s\n", sv.Hoten);
	printf("Lop: %s\n", sv.lop);
	printf("So tin chi tich luy: %d\n", sv.soTCTL); fflush(stdin);
	printf("Diem trung binh tich luy: %.2f\n", sv.dtbTL); fflush(stdin);
}

// ham in thong tin sinh vien va xep loai
void inSinhVienVaXepLoai(Sinhvien sv) {
	inSinhVien(sv);
	// Xep loai
	if (sv.dtbTL>=3.60) printf("Xep loai: Xuat sac\n");
	if (sv.dtbTL>=3.20 && sv.dtbTL<=3.59) printf("Xep loai: Gioi\n");
	if (sv.dtbTL>=2.50 && sv.dtbTL<=3.19) printf("Xep loai: Kha\n");
	if (sv.dtbTL>=2.00 && sv.dtbTL<=2.49) printf("Xep loai: Trung binh\n");
	if (sv.dtbTL<=1.99) printf("Ban khong du dieu kien tot nghiep\n");
}

int main() {
	// 2. Nhap so luong SV can quan li n
	int n;
	printf("Nhap so sinh vien can qua li: n = "); scanf("%d", &n); fflush(stdin);
	
	// 3. Tao mang dong gom n kieu Sinhvien
	Sinhvien *dssv;
	dssv = (Sinhvien*) malloc(sizeof(Sinhvien) * n);
	
	// 4. Nhap thong tin sinh vien
	char temp[50];
	for (int i=0; i<n; i++) {
		printf("Nhap thong tin thu %d\n", i+1);
		//MSSV
		printf("MSSV: "); gets(temp); dssv[i].MSSV = strdup(temp);
		//Hoten
		printf("Hoten: "); gets(temp); dssv[i].Hoten = strdup(temp);
		//lop
		printf("Lop: "); gets(temp); dssv[i].lop = strdup(temp);
		//soTCTL
		printf("So TCTL: "); scanf("%d", &(dssv[i].soTCTL)); fflush(stdin);
		//
		printf("Diem TBTL: "); scanf("%f", &(dssv[i].dtbTL)); fflush(stdin);
	}
	
	// 5. Hien thi sinh vien co diem TB cao nhat va thap nhat
	// 5.1 Sap xep diem TBTL tang dan
	float a;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (dssv[i].dtbTL > dssv[j].dtbTL) {
				a = dssv[i].dtbTL;
				dssv[i].dtbTL = dssv[j].dtbTL;
				dssv[j].dtbTL = a;
			}
		}
	}
	// 5.2 In DTB TL sv da sap xep (kiem tra)
//	puts(""); puts("");
//	for (int i=0; i<n; i++) {
//		inSinhVien(dssv[i]);
//	}
	// 5.3 Hien thi sinh vien co diem TB cao nhat va thap nhat
	puts(""); puts("");
	puts("-------Max--Min----");
	puts("Sinh vien co diem TBTL cao nhat");
	inSinhVien(dssv[n-1]);
	puts("Sinh vien co diem TBTL thap nhat");
	inSinhVien(dssv[0]);
	puts("-------||||------");
	puts(""); puts("");
	// 6. Nhap them m SV
	int m;
	printf("Nhap them thong tin sinh vien can quan ly m = "); scanf("%d", &m); fflush(stdin);
	// 6.1 Cap phat mang moi
	Sinhvien *dssvNew;
	// Important: Cap phat them la 'plus' (m+n)
	dssvNew = (Sinhvien*) malloc(sizeof(Sinhvien)*(m+n));
	
	// 6.2 Copy du lieu
	memcpy(dssvNew, dssv, (m+n)*sizeof(Sinhvien));
	
	// 6.3 Xoa mang cu
	free(dssv);
	
	// 6.4 Nhap thong tin sinh vien cho mang moi
	for (int i=n; i < m+n; i++) {
		printf("Nhap thong tin thu %d\n", i+1);
		//MSSV
		printf("MSSV: "); gets(temp); dssvNew[i].MSSV = strdup(temp);
		//Hoten
		printf("Hoten: "); gets(temp); dssvNew[i].Hoten = strdup(temp);
		//lop
		printf("Lop: "); gets(temp); dssvNew[i].lop = strdup(temp);
		//soTCTL
		printf("So TCTL: "); scanf("%d", &(dssvNew[i].soTCTL)); fflush(stdin);
		// Diem TBTL
		printf("Diem TBTL: "); scanf("%f", &(dssvNew[i].dtbTL)); fflush(stdin);
	}
	
	// 7. Hien thi thong tin tat ca sinh vien voi xep loai
	printf("\n\n--------*-IN-SV-*---------\n");
	for (int j=0;j<m+n;j++){
		printf("------------*---------\n");
		inSinhVienVaXepLoai(dssvNew[j]);
	}
	puts("-------||||------");
	
	// giai phong bo nho
	free(dssvNew);
	return 0;
}
