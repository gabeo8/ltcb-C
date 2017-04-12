/*
	Ho ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>


int main() {
	char *s = "hell56o";
	while(*s != '\0'){
		printf("%s ", (s++));
	}
	
	return 0;
}
