#include <stdio.h>
int a[100];  //Khai b�o m?ng array k�ch thu?c 100
int main() //H�m th�n ch?y chuong tr�nh b?t bu?c c�
{
    int i,j,n,k;  //Khai b�o bi?n ki?u int
    printf("Nhap so mang cua phan tu: "); //Hi?n th? m�n h�nh
    scanf("%d", &n);  //Nh?p v�o s? l?n l?p
     for (i = 0; i < n; i++) //v�ng l?p for
     {
      printf("nhap phan tu thu %d: ", i + 1);
      scanf("%d", &a[i]); //Nh?p v�o m?ng s? i
     }
     for (i = 0; i < n-1;i++){
         for (j = i+1; j < n;j++){
             if (a[i]>a[j]) //Tang d?n or Gi?m d?n a[i]<a[j]
             {
                  k = a[i];   //k l� bi?n t?m luu gi� tr?
                  a[i] = a[j];  //th?c hi?n d?i ch? 'd?i ch�'
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
