/*
	Ho ten: Pham Truong An
	MSSV: B1302707
*/

#include<stdio.h>
#include<string.h>
#include<malloc.h>
/*
	Van de: tach chuoi
	ex: nguyen van abc -> [nguyen] [van] [abc]
	
*/
char **tachtu(char *s, int *n){
	char *t,ch[50],**kq;
	*n=0;
	for (int i=0; i<strlen(s);i++)
		if (s[i]==' ') *n=*n+1;
		
	*n=*n+1;
	kq=(char**) malloc(sizeof(char*)*(*n));
	int i=0;
	while (strchr(s, ' ') != NULL){
		t=strchr(s, ' ');
		t++;
		strncpy(ch, s, strlen(s) - strlen(t)-1);
		ch[strlen(s) - strlen(t)-1] = '\0';
		kq[i] = strdup(ch);
		i++;
		s = t;	
	}
	kq[*n-1] = strdup(s);
	
	return kq;
}
int main(){
	char ht[50]; int n,i;
	char **ds;
	printf("nhap vao chuoi: "); gets(ht);
	ds=tachtu(ht,&n);
	for (i=0; i<n; i++)
		printf( "[%s] ", ds[i]);
		
	for (i=0; i<n; i++)
		free(ds[i]);
	free(ds);
	return 0;
}
