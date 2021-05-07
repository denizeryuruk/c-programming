#include <stdio.h>
#include <stdlib.h>


int main() {

	int dizi[]={41,74,25,10,8,20,65,58,44,12};
	int sayi, i,bulundu=0; // bulundu=0 yazmanýn nedeni bulunduyu baþta false kabul etmemiz
	
	printf("Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	for(i=0;i<10;i++) 
	{
		if(dizi[i]==sayi)
		{
			bulundu=1; // if doðruysa bulundu=1 olucak true deðerini döndürmüþ olucak
			break;    // true olduðundan for döngüsünden çýkmýþ olucak   
		}
	}
	if(bulundu==1)  //kullanýcýya bilgi vermek
	{
		printf("Girilen %d degeri dizinin %d. indisinde dir.",sayi,i);
	}
	else
	printf("Sayi Bulunamadi");
	
	return 0;
}
