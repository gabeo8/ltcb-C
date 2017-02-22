#include<stdio.h>
#include<string.h>

int main() {
	char str[50];
	char tmp[50];
	gets(str);
	int x=0;
	for(int i=0; i<=strlen(str); i++){
		tmp[x]=str[i];
		x++;
	
		if(str[i]==' ' || str[i]=='\0' ){
			tmp[x]='\0';
			printf("%s\n", tmp);
			x=0;
		}
	}	
	return 0;
}
