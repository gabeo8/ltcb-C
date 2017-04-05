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
	// read file sinhvien.txt
	FILE *f = fopen("Sinhvien.txt", "r");
	
	SinhVien lopSV[50];
	char temp[100];
	
	int n;
	printf("Nhap so sinh vien ban muon lay thong tin n = "); scanf("%d", &n); fflush(stdin);
	
	// Lay thong tin sinh vien tu file 'Sinhvien.txt' va ghi vao cau truc
	for(int i=0; i<n; i++) {
		// MSSV
		fgets(temp, 100, f);
		lopSV[i].MSSV = strdup(temp);
		// Ho ten
		fgets(temp, 100, f);
		lopSV[i].HoTen = strdup(temp);
		// Ngay sinh
		fgets(temp, 100, f);
		lopSV[i].NgaySinh = strdup(temp);
		// Que quan
		fgets(temp, 100, f);
		lopSV[i].QueQuan = strdup(temp);
		// Diem trung binh tich luy
		fscanf(f, "%f\n", &lopSV[i].DTB);
		// Diem ren luyen
		fscanf(f, "%d\n", &lopSV[i].DRL);
	}
	
	// in ra man hinh
	for (int i=0; i<n; i++) {
		printf("---------------\n");
		//MSSV
		printf("MSSV: %s", lopSV[i].MSSV);
		//Ho ten
		printf("Ho ten: %s", lopSV[i].HoTen);
		//Ngay sinh
		printf("Ngay sinh: %s", lopSV[i].NgaySinh);
		//Que quan
		printf("Que quan: %s", lopSV[i].QueQuan);
		//Diem trung binh
		printf("Diem trung binh: %.2f\n", lopSV[i].DTB);
		//Diem ren luyen
		printf("Diem trung binh: %d\n", lopSV[i].DRL);
		printf("---------------\n");
	}
	
	// CLose file
	fclose(f);
	
	return 0;
}
