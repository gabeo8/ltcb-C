/*
	Ho ten: Pham Truong An
	MSSV: B1302707
*/

#include<stdio.h>
#include<string.h>
#include<malloc.h>

// 1.cau truc SinhVien
typedef struct {
	char *MSSV;
	char *HoTen;
	char *NgaySinh;
	char *QueQuan;
	float DTB;
	int DRL;
} SinhVien;

// 2. nhap thong tin sinh vien va luu vao Sinhvien.txt
void writeFileSinhVien(int n, SinhVien lopSV[50]) {
	char temp[100];
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
}

// 3.1 Doc file Sinhvien.txt
void readFileSinhVien(int n, SinhVien lopSV[50]) {
	char temp[100];
	// read file sinhvien.txt
	FILE *f = fopen("Sinhvien.txt", "r");
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
	
	// CLose file
	fclose(f);
}
// va 3.2 in ra man hinh thong tin sinh vien
void InSinhVien(int n, SinhVien lopSV[50]) {
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
}

void SapXep(int n, SinhVien lopSV[50]) {
	readFileSinhVien(n, lopSV);
	//printf("ok.....");
	int i, j, min;
	SinhVien tam;
	// thuat toan sap xep
	for(i=0;i<n;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
        	if ((strlen(lopSV[j].MSSV)<strlen(lopSV[min].MSSV)) || 
                ((strlen(lopSV[j].MSSV)==strlen(lopSV[min].MSSV)) &&
				(strcmp(lopSV[j].MSSV, lopSV[min].MSSV) < 0)))
                min=j;
        }
        if(min!=i) {
            tam=lopSV[i];
            lopSV[i]=lopSV[min];
            lopSV[min]=tam;
        }
    }
    // in thu sv sau khi sap xep
    //InSinhVien(n,lopSV);
    
    // Ghi thong tin sinh vien da sap xep vao file sv.txt
	FILE *f = fopen("sv.txt", "w");
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
}

int main() {
	int n;
	SinhVien lopSV[50];
	printf("Nhap so sinh vien can quan li: n= "); scanf("%d", &n); fflush(stdin);
	
	// wirte Sinhvien.txt
	writeFileSinhVien(n, lopSV);
	
	// read Sinhvien.txt
	readFileSinhVien(n, lopSV);
	
	// In sinhvien
	printf("\n\n--------In Sinh vien-------\n");
	InSinhVien(n, lopSV);
	
	// sap xep theo mssv va luu vao file sv.txt
	SapXep(n, lopSV);
	//
	
	return 0;
}
