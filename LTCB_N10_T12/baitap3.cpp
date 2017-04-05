#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

char* alltrim(char* s){
	char *t,ch[50],kq[100];
	int i=0;
	while (i<strlen(s)){
		if (*(s+i)=' '&&*(s+i+1)=' ')
		  s++;
		
	
		s=t;
	}
	kq[strlen(kq)+1]='\0';
	return kq;
}
int main(){
	char *s,pt[1000],n;
	printf("nhap chuoi: "); gets(pt);
	n=strlen(pt);
	s=(char*)malloc(n);
	s=alltrim(pt);
	puts(s);
	free(s);
	return 0;
}
