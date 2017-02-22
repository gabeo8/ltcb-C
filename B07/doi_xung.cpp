#include <stdio.h>
#include <string.h>

bool doixung(char str[50]) {
	for (int i=0; i < strlen(str)/2; i++) {
		if(str[i] != str[strlen(str)-i-1]){
			return false;
		}		
	}
	return true;
}

int main() {
	char s[50];
	gets(s);
	
	if(doixung(s)) {
		printf("Day la chuoi doi xung");
	} else {
		printf("Day khong phai la chuoi doi xung");
	}
	
	return 0;
}
