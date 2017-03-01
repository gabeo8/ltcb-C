#include <stdio.h>
#include <conio.h>

void InMatran(int a[10][10], int X, int Y) {
//	printf("Hello");
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			printf("# ");
		}
		printf("\n");
	}
}

int main() {
	
	int a[10][10], X, Y;
	printf("Nhap X = "); scanf("%d", &X);
	printf("Nhap Y = "); scanf("%d", &Y);
	InMatran(a, X, Y);
	
	return 0;
}
