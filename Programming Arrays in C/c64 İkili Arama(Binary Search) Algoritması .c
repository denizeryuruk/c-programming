#include <stdio.h>
#include <stdlib.h>

//Ýkili Arama(Binary Search) Algoritmasý C
/* Dizinin sýralý olduðu varsayýlýr,ortanca deðer ile aranan sayý karþýlaþtýrýlýr,eþitse durur
küçükse sola bakar,büyükse saða bakar.

   1 3 (5) 7 9   --->aranan sayý = 3
   
  (1) 3 
  
  (3)
*/

int binarySearch(int [],int ,int ,int); // fonk. dört argüman iletiyoruz: ilk ve son dizini, aranacak öðe dizisi.

int main() {
	
	int n,dizi[n],i;
	int aranan;
	
	printf("Dizi Boyunu Giriniz: ");
	scanf("%d",&n);
	
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
	printf("Sayi Dizide var: %d",sonuc);
		
	
	return 0;
}

int binarySearch(int dizi[],int bas,int son,int aranan) // fonk. dört argüman iletiyoruz: ilk ve son dizini, aranacak öðe dizisi.
{
	while(son<=bas)
	{
		int orta=bas+(son-bas)/2;
		
		if(dizi[orta]==aranan)
		{
			return orta;
		}
		
		if(dizi[orta]<aranan)
		{
			bas=orta+1;
		}
		
		else
		son=orta-1;	
	}
	return -1;
	
}

