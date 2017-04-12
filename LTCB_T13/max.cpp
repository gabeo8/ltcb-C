/*
	Ho ten: Pham Truong An
	MSSV: B1302707
*/

#include <stdio.h>

// So lon nhat va nho nhat trong Array
int main() {
	int arr[4] = {0, 4, 1, 6};
	int max = arr[0];
	int min = arr[0];
	for (int i=1;i<4;i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	// max and min number
	printf("Max = %d, Min = %d", max, min);
	return 0;
}


