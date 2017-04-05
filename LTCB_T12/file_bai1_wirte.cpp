/*
	Ho ten: Pham Truong An
	MSSV: B1302707
*/

#include<stdio.h>
#include<string.h>
#include<malloc.h>

// cau truc SinhVien
typedef struct {
	char *MSSV;
	char *HoTen;
	char *NgaySinh;
	char *QueQuan;
	float DTB;
	int DRL;
} SinhVien;

int main() {
	int n;
	char temp[100];
	SinhVien lopSV[50];
	printf("Nhap so sinh vien can quan li: n= "); scanf("%d", &n); fflush(stdin);
	// wirte Sinhvien.txt
	for (int i=0; i<n; i++) {
		// Sinh vien thu ...
		printf("Nhap thong tin cho sinh vien thu %d\n", i+1);
		// MSSV
		printf("MSSV: "); gets(temp); lopSV[i].MSSV = strdup(temp);
		// Ho ten
		printf("HoTen: "); gets(temp); lopSV[i].HoTen = strdup(temp);
		// Ngay Sinh
		printf("Ngay sinh: "); gets(temp); lopSV[i].NgaySinh = strdup(temp);
		// Que quan
		printf("Que Quan: "); gets(temp); lopSV[i].QueQuan = strdup(temp);
		// Diem trung binh
		printf("Diem trung binh: "); scanf("%f", &lopSV[i].DTB); fflush(stdin);
		// Diem ren luyen
		printf("Diem ren luyen: "); scanf("%d", &lopSV[i].DRL); fflush(stdin);
	}
	// Ghi thong tin sinh vien vao file Sinhvien.txt
	FILE *f = fopen("Sinhvien.txt", "w");
	for (int i = 0; i < n; i++) {
		//MSSV
		fputs(lopSV[i].MSSV, f);
		fputs("\n", f);
		//Ho ten
		fputs(lopSV[i].HoTen, f);
		fputs("\n", f);
		//Ngay Sinh
		fputs(lopSV[i].NgaySinh, f);
		fputs("\n", f);
		//Que quan
		fputs(lopSV[i].QueQuan, f);
		fputs("\n", f);
		//Diem trung binh
		fprintf(f, "%f\n", lopSV[i].DTB);
		//Diem ren luyen
		fprintf(f, "%d\n", lopSV[i].DRL);
	}
	// CLose file
	fclose(f);
	
	return 0;
}





