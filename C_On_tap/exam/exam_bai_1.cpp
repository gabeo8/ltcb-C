#include <stdio.h>
#include <string.h>
#include <malloc.h>

// 2. tao cau truc ChienSi
typedef struct {
	char MS[5];
	int tuoinhapngu;
	int tuoi;
} ChienSi;

// 3. Ham InChienSi 
void InChienSi(ChienSi cs) {
	printf("MS: %s\n", cs.MS);
	printf("Tuoi nhap ngu: %d\n", cs.tuoinhapngu);
	printf("Tuoi hien tai: %d\n", cs.tuoi);
}

// 4. Ham TuoiTrungBinh 
float TuoiTrungBinh (ChienSi *cs, int n) {
	float avg;
	int sum = 0, i;
	for(i = 0; i < n; i++) {
		sum += cs[i].tuoi;
	}
	avg = (float) sum/n;
	return avg;
} 

// 5. Ham TuoiQuanNhoNhat 
// Tuoi quan = Tuoi hien tai - Tuoi nhap ngu
int TuoiQuanNhoNhat(ChienSi *cs, int n) {
	int min, i;
	int tuoiquan[50];
	tuoiquan[0] = cs[0].tuoi - cs[0].tuoinhapngu;
	min = tuoiquan[0];
	for(i = 1; i < n; i++) {
		tuoiquan[i] = cs[i].tuoi - cs[i].tuoinhapngu;
		if (tuoiquan[i] < min ) {
			min = tuoiquan[i];
		}
	}
	
	return min;
}

int main() {
	// 6.1. Khai bao danh sach chien si co N chien si
	int N;
	ChienSi *cs;
	do {
		printf("Nhap so chien si can nhap thong tin (N > 3): ");
		scanf("%d", &N); // dieu kien N>3
		fflush(stdin);
	} while(N <= 3);
	// Cap bo nho
	cs = (ChienSi*) malloc(sizeof(ChienSi) * N);
	// 6.2 Nhap thong tin cho danh sach
	int i;
	for (i = 0; i < N; i++) {
		printf("Nhap thong tin cho chien si %d \n", i+1);
		printf("MS: "); gets(cs[i].MS);
		do {
			printf("Tuoi nhap ngu: "); scanf("%d", &cs[i].tuoinhapngu); fflush(stdin);
			printf("Tuoi hien tai: "); scanf("%d", &cs[i].tuoi); fflush(stdin);
		} while( cs[i].tuoinhapngu > cs[i].tuoi ); // dieu kien tuoi nhap ngu <= tuoi hien tai
	}
	
	// 6.3 In danh sach chien si vua nhap
	puts(" ---- In -----");
	for (i = 0; i < N; i++) {
		InChienSi(cs[i]);
	}
	puts(" ---- End -----");
	// 15+25+20+30 = 90/4 = 22.00
	// 6.4 In tuoi tb cua chien si trong danh sach
	printf("Tuoi trung binh cua chien si trong danh sach: %f\n", TuoiTrungBinh(cs, N));
	
	// 6.5 in tuoi quan nho nhat
	int minTuoiQuan = TuoiQuanNhoNhat(cs, N);
	printf("Tuoi quan nho nhat cua chien si trong danh sach: %d\n", minTuoiQuan);

	// 6.6 In thong chien si co tuoi quan nho nhat
	puts("------ Thong tin chien si tuoi quan nho nhat -----");
	int tuoiquan[50];
	for (i = 0; i < N ; i++) {
		tuoiquan[i] = cs[i].tuoi - cs[i].tuoinhapngu;
		if (tuoiquan[i] == minTuoiQuan) {
			InChienSi(cs[i]);
		}
	}
	puts("-----------------end ---------------");
	
		
	// 6.7 in thong tin chien si chi huy
	/* idea:
		1. duyet qua tung ms -> use for
		2. duyet qua tung ki tu trong ms -> use while
		3. kiem tra ki tu co so hay k? -> ma ascii '0' = 48, '9' = 57 
		4. neu co so in ra va dung vong lap cua ms do
	*/
	// 6.7.1
	int isMScoSo = 0;
	for (i = 0; i < N; i++) {
		int j = 0;
		while( j < strlen(cs[i].MS)) {
//			printf("%c - \n", cs[i].MS[j]);
			if ( cs[i].MS[j] >= 48 && cs[i].MS[j] <= 57 ){
				isMScoSo = 1;
			} else {
				isMScoSo = 0;
			}
			if (isMScoSo == 1) break;	
			j++;
		}
		
		if (isMScoSo == 1) {
			printf(" ---- Chien si chi huy------ \n");
			InChienSi(cs[i]);
		}
	}
		
	
	// Giai phong bo nho da cap
	free(cs);
	return 0;
}
