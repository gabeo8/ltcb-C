/*
	Ho & ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <malloc.h>

// Tra ve so luong sinh vien co diem TB >= 5
int trenTB(float *arr, int n) {
	int count;
	for (int i=0;i<n;i++) {
		if( *(arr+i) >= 5 ) count++;
	}
	return count;
}

int main() {
	//1. nhap so sv can quan ly
	int n;
	printf("Nhap so luong sinh vien n = "); scanf("%d", &n);
	// 2. mang dong
	float *diemTB;
	diemTB = (float*)malloc(n*sizeof(float));
	
	//3. Nhap diem tb
	for(int i=0;i<n;i++) {
		printf("Nhap diem trung binh cua sinh vien thu %d = ", i+1);
		scanf("%f", diemTB+i);
	}
	//4. In so sinh vien co diem tb > 5
//	for (int i=0;i<n;i++){
//		if(*(diemTB+i)>5){
//			printf("Sinh vien co DTB tren 5 la sinh vien thu: %d = %f\n", i, *(diemTB+i));
//		}
//	}
	printf("So sinh vien co DTB >= 5 la: %d\n", trenTB(diemTB,n));
	
	int count = 0;
	while(true) {
		// 5. cho phep nhap them so sv
		printf("Nhap so luong sinh vien can them vao (nhap -1 de thoat) n = "); scanf("%d", &n);
		if(n==-1) break;
		
		diemTB = (float*)malloc(n*sizeof(float));
		count++;
		//6. Nhap diem tb
		for(int i=0;i<n;i++) {
			printf("Nhap diem trung binh cua sinh vien moi thu %d = ", i+1);
			scanf("%f", diemTB+i);
		}	
	}
		
	//giai phong diemTB
	free(diemTB);
	
	return 0;
}
