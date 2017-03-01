#include <stdio.h>
#include <conio.h>


int main() {
	int a[10][10], M, N;
	printf("So dong M= "); scanf("%d", &M);
	printf("So dong N= "); scanf("%d", &N);
	
	printf("Ma tran %d x %d cua ban la:\n", M, N);
	for(int i=0; i<M;i++){
		for(int j=0; j<N;j++){
			printf("%c ", a[i][j]='#');
		}
		printf("\n");
	}
	
	return 0;
}
