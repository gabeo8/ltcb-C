#include <stdio.h>
#include <conio.h>


int main() {
	int a[4][4];
	printf("  0 1 2 3\n");
	for(int i =0; i<4; i++) {
		printf("%d ", i);
		for(int j=0;j<4;j++) {
			printf("# ");
		}
		printf("\n");
	}
	return 0;
}
