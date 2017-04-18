#include<stdio.h>
#include<conio.h>
#include<string.h>

// diem so lan ki tu xuat hien
//
int kiemtra(char s[], int i) {
	int kt = 0;
	for (int j = 0; j <= i; j++) {
		if(s[i] == s[j]) kt++;
	}
	if(kt > 1) return 0;
	return 1;
}
int main() {
	int arr[50];
	char s[] = "hellooo heloo"; // h=2, e=2,l=3,o=5, 
	for (int i = 0; i < strlen(s); i++) {
		int dem = 0;
		if ( s[i] != ' ' && kiemtra(s, i) == 1) {
			for (int j = i; j < strlen(s); j++){
				if( s[i] == s[j]) dem++;
			}
			arr[i] = dem;
			printf("%d", arr[i]);	
		}	
	}
	
//	int max = arr[0];
//	for (int i=1; i < strlen(s); i++){
//		printf("%d", arr[i]);
//	}
//	//printf("%d ", max);
//	
	return 0;
}
