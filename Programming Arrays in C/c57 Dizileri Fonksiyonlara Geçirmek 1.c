#include <stdio.h>
#include <stdlib.h>
#define n 5
/*

 d�n��Tipi fonksiyonAd�(tip dizi[],tip boyut)
{
   i�lemler....
}

int main() {
	
	int diziAd�[Boyut];
	fonksiyonAdi(diziAdi,Boyut)
		
	return 0;
}
*/

// kullan�c�dan 5 say� al�p hangisinin en b�y�k oldu�unu bulma

void maximumbul(int dizi[],int boyut)
{
	int i,max=0;
	
	printf("***5 Sayi Giriniz***\n\n");
	
	for(i=0;i<boyut;i++) // dizinin 5 defa (boyut) kadar tekrar etmesini sa�lar 
	{
		printf("%d. Sayi: ",i+1);
		scanf("%d",&dizi[i]);
		
		if(dizi[i]>max)
		{
			max= dizi[i];  //ilk de�er 0 old. i�in art�k burada kullan�c�dan say�lar ald�k�a k�yaslamalr yapar
		}
	}
	printf("\nMaximum Deger: %d dir.",max);	
	
}

int main() {
	
	int max[n];
	maximumbul(max,n);
		
	return 0;
}
