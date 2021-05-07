#include <stdio.h>
#include <stdlib.h>

//�kili Arama(Binary Search) Algoritmas� C
/* Dizinin s�ral� oldu�u varsay�l�r,ortanca de�er ile aranan say� kar��la�t�r�l�r,e�itse durur
k���kse sola bakar,b�y�kse sa�a bakar.

   1 3 (5) 7 9   --->aranan say� = 3
   
  (1) 3 
  
  (3)
*/

int binarySearch(int [],int ,int ,int); // fonk. d�rt arg�man iletiyoruz: ilk ve son dizini, aranacak ��e dizisi.

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

int binarySearch(int dizi[],int bas,int son,int aranan) // fonk. d�rt arg�man iletiyoruz: ilk ve son dizini, aranacak ��e dizisi.
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

