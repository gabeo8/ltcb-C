#include <stdio.h>
#include <string.h>
#include <malloc.h>

// Bai 4
// a.
typedef struct {
	int ngay;
	int thang;
	int nam;
} NgayThang;

// b.
//int NextDay(NgayThang nextDay) {
//	
//	return nextDay;
//}
int main() {
	
	NgayThang ntn;
	printf("nhap date: ");
	scanf("%d/%d/%d", &ntn.ngay, &ntn.thang, &ntn.nam);
	printf("Date: %d/%d/%d", ntn.ngay, ntn.thang, ntn.nam);
	
	return 0;
}
