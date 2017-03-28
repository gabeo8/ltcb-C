#include <stdio.h>
int a[100];  //Khai báo m?ng array kích thu?c 100
int main() //Hàm thân ch?y chuong trình b?t bu?c có
{
    int i,j,n,k;  //Khai báo bi?n ki?u int
    printf("Nhap so mang cua phan tu: "); //Hi?n th? màn hình
    scanf("%d", &n);  //Nh?p vào s? l?n l?p
     for (i = 0; i < n; i++) //vòng l?p for
     {
      printf("nhap phan tu thu %d: ", i + 1);
      scanf("%d", &a[i]); //Nh?p vào m?ng s? i
     }
     for (i = 0; i < n-1;i++){
         for (j = i+1; j < n;j++){
             if (a[i]>a[j]) //Tang d?n or Gi?m d?n a[i]<a[j]
             {
                  k = a[i];   //k là bi?n t?m luu giá tr?
                  a[i] = a[j];  //th?c hi?n d?i ch? 'd?i chó'
                  a[j] = k; 
             }
         }
     }
     printf("mang sau khi da sap xep la:\n");
         for (i = 0; i < n; i++) {
            printf(" %d ", a[i]); //M?i l?n l?p in ra m?ng i
         }
    printf("max = %d, min = %d", a[n-1], a[0]);
}
