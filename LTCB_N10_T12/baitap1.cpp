#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
char* daochuoi(char *s){
int n=strlen(s);
char *s1;
	s1=(char*)malloc(sizeof(s));
	for (int i=0; i<n; i++)
		*(s1+n-i-1)=*(s+i);
	*(s1+n)='\0';	
	return s1;
}
int main(){
	char *s,*s1,t[1000];
	printf("nhap chuoi: "); gets(t);
	s=strdup(t);
	s1=daochuoi(s);
	printf("%s", (s1+0));
	return 0;
}
