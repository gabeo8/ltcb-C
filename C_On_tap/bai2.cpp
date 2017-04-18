#include <stdio.h>
#include <string.h>
#include <malloc.h>

// Bai 2
// a. 
int countCharactor(char *str, char c = 'c') {
	int count = 0, i = 0;
	while(i < (strlen(str))) {
		if(str[i] == c) {
			count++;
		}
		i++;
	}
	return count;
}

// b
// Kiem tra so lan xuat hien cua ki tu
int kiemtra(char *str, int i) {
	int kt = 0;
	for (int j = 0; j <= i; j++) {
		if (str[i] == str[j]) kt++;
	}
	if(kt > 1) return 0; // neu xuat hien nhieu lan
	return 1; // xuat hien mot lan
}
int dem(char *str, int i) {
	int dem = 0;
	for (int j = i; j < strlen(str); j++) {
		if (str[i] == str[j]) dem++;
	}
	return dem;
}
int maxCharactor(char *str) {
	int maximum = 0;
	
	for (int i = 0; i < strlen(str); i++) {		
		if (kiemtra(str, i) == 1) {
			printf("ki tu %c co %d so lan xuat hien\n", str[i], dem(str, i));
		}
	}
//	printf("%d", maximum);	
}
int main() {
	char *str;
	char temp[50];
	printf("nhap mot chuoi: "); gets(temp);
	str = strdup(temp);
	// so lan xuat hien ki tu 'c'
	//printf("%d", countCharactor(str));
	maxCharactor(str);
	return 0;
}
