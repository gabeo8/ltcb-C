#include <stdio.h>
bool kiemtraSNT(int n){
	for(int i=0; i< n/2; i++) {
		if(n%i==0){
			return false;
		}
	}
	
	return true;
}

int main(){
	
	int n;
	printf("Vui long nhap n = "); scanf("%d", &n);
	
	
	if(kiemtraSNT(n)) {
		printf("Day la so nguyen to!");
	}
	else {
		printf("Rat tiec day khong phai la so nguyen to!!");
	}
	return 0;
}
