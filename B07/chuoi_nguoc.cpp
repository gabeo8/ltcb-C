#include <stdio.h>
#include <string.h>

int main() {
	
	/* hello => olleh */
	char str[50];
	gets(str);
	printf("Chuoi nguoc cua %s la ", str);
	for (int i=strlen(str)-1; i>=0; i--) {
		printf("%c", str[i]);
	}
	return 0;
}
