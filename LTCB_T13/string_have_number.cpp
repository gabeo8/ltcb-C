#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main() {
	int n;
	char **str;
	int isDigit = 0;
	printf("Nhap n = "); scanf("%d", &n); fflush(stdin);
	str = (char**) malloc(sizeof(char*)*n);
	char temp[100];
	for (int i=0; i<n; i++) {
		printf("nhap str %d: ", i+1);
		gets(temp);
		str[i] = strdup(temp);
	}
	puts("---In---");
	for (int i=0; i<n; i++) {	
		printf("String %d: %s\n", i+1, str[i]);
	}
	puts("---String co so---");
	
	for (int i=0; i < n; i++) {
		for (int j=0; j < strlen(str[i]); j++){
			// 0=48, 9=57
			if(str[i][j] >= 48 && str[i][j] <= 57) {
    	        isDigit = 1;
			} else {
				isDigit = 0;
			}
		}
		if (isDigit == 1) printf("%s ", str[i]);
	
	}
	return 0;
}

