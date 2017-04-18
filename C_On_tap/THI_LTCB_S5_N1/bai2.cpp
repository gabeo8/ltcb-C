#include <stdio.h>
#include <string.h>

// a. diem ki tu c
// test case : cconga => 2
int countCharactor(char *str, char c = 'c') {
	int i, count;
	count = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == c) count++;
	}
	return count;
}

// b. so lan xuat hien nhieu nhat cua mot ki tu
int max(char *str) {
	int i, max;
	char arr[256] = {0};
	for (i = 0; i < strlen(str); i++) {
		arr[str[i]]++;
	}
	max = -1;
	for (i = 0; i < strlen(str); i++) {
		if (arr[str[i]] > max) {
			max = arr[str[i]];
		}
	}
	return max;
}
// c. ki tu co so lan xuat hien nhieu nhat
char maxCharactor(char *str) {
	int i, maxChar;
	char arr[256] = {0};
	for (i = 0; i < strlen(str); i++) {
		arr[str[i]]++;
	}
	maxChar = -1;
	char result;
	for (i = 0; i < strlen(str); i++) {
		if (arr[str[i]] > maxChar) {
			maxChar = arr[str[i]];
			result = str[i];
		}
	}
	return result;
}
// d. 
int positionC( char *str, char c = 'c') {
	int i, vitriC;
	for (i = 0; i < strlen(str); i++) {
		if(str[i] == c){
			vitriC = i + 1;
			break;
		} else {
			vitriC = -1;
		}
	}
	return vitriC;
}

// e. thay the 'c' thanh 'c1'
char replaceChar(char *str, char c = 'c', char *c1 = "c1" ) {
	int i;
	
	for (i = 0; i < strlen(str); i++) {
		
		if (str[i] == c){
			
			str[i] = c1;
			printf("%c - ", str[i]);
		}
	}
	printf("replace: %s\n", str);
}

int main() {
	char *str;
	char temp[50];
	printf("Nhap chuoi: "); gets(temp); str = strdup(temp);
	// So lan ki tu c xuat hien trong chuoi
	printf("c = %d\n", countCharactor(str));
	
	// so lan xuat hien nhieu nhat cua mot ki tu
	printf("max = %d\n", max(str));
	
	// ki tu co so lan xuat hien nhieu nhat
	printf("maxCharactor = %c\n", maxCharactor(str));
	if (positionC(str) == -1) {
		printf("Ki tu 'c' k xuat hien trong chuoi\n");
	} else {
		printf("Vi tri ki tu c trong chuoi = %d\n", positionC(str));
	}
	replaceChar(str);
	return 0;
}
