#include <stdio.h>
#include <stdlib.h>
#define n 5

void notoku(int dizi[],int boyut);
double ortHesapla(int dizi[],int boyut);

int main() {
	
	int notlar[n]; // burada tekrardan farlý bir dizi adý belirlemelisin
	
	notoku(notlar,n);  // 1. fonksiyon
	
	ortHesapla(notlar,n);  // 2. fonksiyon
	
	return 0;
}

void notoku(int dizi[],int boyut)
{
	int i;
	for(i=0;i<boyut;i++)
	{
		printf("%d. Ogrencinin Notu: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	
	for(i=0;i<boyut;i++)
	{
		printf("%d. Ogrencinin Notu: %d dir.\n",i+1,dizi[i]);
		
	}
		
}

double ortHesapla(int dizi[],int boyut)
{
	int i,toplam=0,ortalama;
	for(i=0;i<boyut;i++)
	{
		toplam+=dizi[i];
	}
	
	ortalama= toplam/boyut;
	
	printf("\n**Sinifin Ortalamasi= %d dir.**",ortalama);
		
}




















