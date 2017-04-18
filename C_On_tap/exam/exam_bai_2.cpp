#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*
	N = 4
	N:   MS  - D  - R - S  -        Chien luoc
	1: ABCDA - 6  - 5 - 30 -           x
	2: AAAAB - 7  - 5 - 35 - 
	3: ADDAD - 4  - 2 - 8  - MIN       x
	4: ABCDE - 10 - 5 - 50 - MAX
	TONG DIEN TICH: 123
*/

// 1. Tao cau truc HonDao
typedef struct {
	char MS[5];
	int chieudai;
	int chieurong;
} HonDao;

// 2. Viet ham InHonDao
void InHonDao(HonDao hd) {
	printf("MS: %s\n", hd.MS);
	printf("Chieu dai: %d m\n", hd.chieudai);
	printf("Chieu rong: %d m\n", hd.chieurong);
}
// 3. Viet ham TongDienTich
// test-case: 1: dai=5, rong=4, 2: dai=6, rong=10 => tongdientich = 80
int TongDienTich(HonDao *hd, int n) {
	int tongdientich = 0, i, dientich;
	for (i = 0; i < n; i++) {
		dientich = hd[i].chieudai * hd[i].chieurong;
		tongdientich += dientich;
	}
	return tongdientich;
}

// 4. Viet ham DienTichLonNhat 
int DienTichLonNhat(HonDao *hd, int n) {
	int max, i, dientich;
	max = 0;
	for(i = 0; i < n; i++) {
		dientich = hd[i].chieudai * hd[i].chieurong;
		if(dientich > max) max = dientich;
	}
	
	return max;
}
int main() {
	// 6.1
	int N, i;
	HonDao *hd;
	do {
		printf("Nhap (N > 3) N = "); scanf("%d", &N); fflush(stdin);
	} while(N <= 3);
	
	// tao mang dong
	hd = (HonDao*) malloc(sizeof(HonDao) * N);
	// 6.2 Nhap thong tin cho danh sach vua khai bao
	for (i = 0; i< N; i++) {
		printf("Nhap thong tin cho Hon dao thu %d\n", i+1);
		printf("MS (5 ki tu): "); gets(hd[i].MS);
		printf("Chieu dai: "); scanf("%d", &hd[i].chieudai); fflush(stdin);
		printf("Chieu rong: "); scanf("%d", &hd[i].chieurong); fflush(stdin);
	}

	// 6.3 In danh sach vua nhap
	puts("-----in-danh-sach-hd------");
	for (i = 0; i < N; i++){
		InHonDao(hd[i]);
	}
	puts("----------End-------------");
	
	// 6.4 In tong dien tich cac hon dao
	puts("");
	printf("Tong dien tich cac hon dao: %d\n", TongDienTich(hd, N));
	puts("");
	 
	// 6.5 in dien tich lon nhat trong danh sach hon dao
	puts("");
	int maxS = DienTichLonNhat(hd, N);
	printf("Dien tich lon nhat trong danh sach cac hon dao: %d\n", maxS);
	puts("");
	
	// 6.6 in thong tin hon dao co dien tich lon nhat
	puts("Thong tin hon dao co dien tich don nhat");
	for (i = 0; i < N; i++) {
		int dientich;
		dientich = hd[i].chieudai * hd[i].chieurong;
		if (dientich == maxS) {
			InHonDao(hd[i]);
		}
	}
	
	// 6.7 In hon dao chien luoc
	/* idea:
		1. Duyet qua MS trong danh sach
		2. Lay ki cuoi khong phai '\0' trong MS
		3. Duyet qua tung ki tu trong MS
		4. So sanh tung ki tu vs ki tu cuoi neu co giong thi dung
		5. In thong tin hon dao do
	
	*/
	puts("");
	puts("In thong tin hon dao chien luoc");
	int j;
	int isCL;
	for (i = 0; i < N; i++) {
		j = 0;
		while( j < strlen(hd[i].MS)-1 ) {
			char lastMSChar = hd[i].MS[(strlen(hd[i].MS)-1)];
			if (hd[i].MS[j] == lastMSChar){
				isCL = 1;
			} else {
				isCL = 0;
			}
			if (isCL == 1) break; 
			j++;
		}
		if (isCL == 1) {
			// In hon dao chien luoc
			InHonDao(hd[i]);	
		}
	
	} 
	puts(" ------ The - end -----");
	
	
	
	// giai phong bo nho
	free(hd);
	return 0;	
}
