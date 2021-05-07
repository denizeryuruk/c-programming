#include <stdio.h>
#include <stdlib.h>
#define m 100

// Dizide Lineer Arama Yapmak

/* dizinin belirli bir elemanýný bulma sürecine arama denir.
þuanlýk,basit lineer arama ve daha karmaþýk olan ikili arama teknikleri göreceðiz.
Lineeer arama,dizinin her elemanýný arama deðeriyle karþýlaþtýrmaktadýr.Büyük diziler için
lineer arama yetersiz kalmaktadýr.*/


int lineerArama(const int[],int,int); // const-->bir fonk. içerisinde dizinin elemanlarýnýn deðerlerinin deðiþtirlemsini engeller.

int main() {
	
	int dizi[m],i,sayi,eleman;
	
	for(i=0;i<m;i++)
	{
		dizi[i]=i+1; // + yaptýðýmýz da neden çýkarýyor.
	}
	
	printf("Arama Degeri Tam Sayisini Giriniz:");
	scanf("%d",&sayi);
	
	eleman=lineerArama(dizi,sayi,m);
	
	if(eleman!=-1)
	{
		printf("Bu Deger,eleman %d de bulundu.\n",eleman);
	}
	else
	printf("Bu Deger Bulunamadi.");
		
	return 0;
}

int lineerArama(const int dizi[],int anahtar,int boyut)
{
	int n;
	
	for(n=0;n<boyut;n++)
	{
		if(dizi[n]==anahtar)
		{
			return n;
		}
	}
	return-1;
	 
}
