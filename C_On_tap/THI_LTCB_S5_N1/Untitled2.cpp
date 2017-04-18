#include <stdio.h>
#include <string.h>



int main() {
	char *str;
	char temp[50];
	printf("Nhap chuoi: "); gets(temp); str = strdup(temp);
	// So lan ki tu c xuat hien trong chuoi
	printf("len = %d", strlen(str));

	return 0;
}
