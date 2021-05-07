#include <stdio.h>
#include <stdlib.h>
#define m 100

// Dizide Lineer Arama Yapmak

/* dizinin belirli bir eleman�n� bulma s�recine arama denir.
�uanl�k,basit lineer arama ve daha karma��k olan ikili arama teknikleri g�rece�iz.
Lineeer arama,dizinin her eleman�n� arama de�eriyle kar��la�t�rmaktad�r.B�y�k diziler i�in
lineer arama yetersiz kalmaktad�r.*/


int lineerArama(const int[],int,int); // const-->bir fonk. i�erisinde dizinin elemanlar�n�n de�erlerinin de�i�tirlemsini engeller.

int main() {
	
	int dizi[m],i,sayi,eleman;
	
	for(i=0;i<m;i++)
	{
		dizi[i]=i+1; // + yapt���m�z da neden ��kar�yor.
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
