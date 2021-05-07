#include <stdio.h>
#include <stdlib.h>

int binarySearch(int [],int ,int ,int); 

int main() {
	
	int n,i;
	int aranan;
	
	printf("Dizi Boyunu Giriniz: ");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		printf("Sayi: ");
		scanf("%d",&dizi[i]);
	}
	
	printf("Aranan Sayiyi Giriniz: ");
	scanf("%d",&aranan);
	
	int sonuc=binarySearch(dizi,0,n-1,aranan);
	
	if(sonuc==-1)
	{
		printf("Sayi Dizide yok");
	}
	else
	printf("Sayi Dizide var ---> %d.indis de",sonuc);
		
	return 0;
}

int binarySearch(int dizi[],int bas,int son,int aranan) 
{
	while(bas<=son)
	{
		int orta=(bas+son)/2;
		
		if(aranan==dizi[orta])
		{
			return orta;
		}
		
		else if(aranan<dizi[orta])
		{
			son=orta-1;
		}
		else
		bas=orta+1;	
	}
	return -1;
	
}

