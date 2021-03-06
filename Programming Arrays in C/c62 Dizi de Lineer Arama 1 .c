#include <stdio.h>
#include <stdlib.h>
#define m 100

// Dizide Lineer Arama Yapmak

/* dizinin belirli bir elemanını bulma sürecine arama denir.
şuanlık,basit lineer arama ve daha karmaşık olan ikili arama teknikleri göreceğiz.
Lineeer arama,dizinin her elemanını arama değeriyle karşılaştırmaktadır.Büyük diziler için
lineer arama yetersiz kalmaktadır.*/


int lineerArama(const int[],int,int); // const-->bir fonk. içerisinde dizinin elemanlarının değerlerinin değiştirlemsini engeller.

int main() {
	
	int dizi[m],i,sayi,eleman;
	
	for(i=0;i<m;i++)
	{
		dizi[i]=i+1; // + yaptığımız da neden çıkarıyor.
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
