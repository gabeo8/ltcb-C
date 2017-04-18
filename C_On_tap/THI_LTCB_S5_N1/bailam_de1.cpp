/*
	Ho ten: 
	MSSV: 
	Phong thi:
	De thi:
	So may ngoi:
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>

// 2. cau truc ChienSi 
typedef struct {
	char MS[5];
	int tuoinhapngu;
	int tuoi;
} ChienSi;
// 3. InChienS
void InChienSi (ChienSi cs) {
	printf("MS: %s\n", cs.MS);
	printf("Tuoi nhap ngu: %d tuoi\n", cs.tuoinhapngu);
	printf("Tuoi hien tai: %d tuoi\n", cs.tuoi);
}
int main() {
	int N;
	ChienSi *cs;
	printf("Nhap danh sach chien si (N > 3): "); scanf("%d", &N); fflush(stdin);
	cs = (ChienSi*) malloc(sizeof(ChienSi) * N);
	// Nhap thong tin cho danh sach chien si vua khai bao
	for (int i = 0; i < N; i++) {
		printf("Nhap chien si thu %d\n", i+1); 
		printf("MS: "); gets(cs[i].MS);
		printf("Tuoi nhap ngu: "); scanf("%d", &cs[i].tuoinhapngu); fflush(stdin);
		printf("Tuoi hien tai: "); scanf("%d", &cs[i].tuoi); fflush(stdin);
	}
	return 0;
}
