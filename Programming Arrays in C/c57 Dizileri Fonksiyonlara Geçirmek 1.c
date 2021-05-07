#include <stdio.h>
#include <stdlib.h>
#define n 5
/*

 dönüþTipi fonksiyonAdý(tip dizi[],tip boyut)
{
   iþlemler....
}

int main() {
	
	int diziAdý[Boyut];
	fonksiyonAdi(diziAdi,Boyut)
		
	return 0;
}
*/

// kullanýcýdan 5 sayý alýp hangisinin en büyük olduðunu bulma

void maximumbul(int dizi[],int boyut)
{
	int i,max=0;
	
	printf("***5 Sayi Giriniz***\n\n");
	
	for(i=0;i<boyut;i++) // dizinin 5 defa (boyut) kadar tekrar etmesini saðlar 
	{
		printf("%d. Sayi: ",i+1);
		scanf("%d",&dizi[i]);
		
		if(dizi[i]>max)
		{
			max= dizi[i];  //ilk deðer 0 old. için artýk burada kullanýcýdan sayýlar aldýkça kýyaslamalr yapar
		}
	}
	printf("\nMaximum Deger: %d dir.",max);	
	
}

int main() {
	
	int max[n];
	maximumbul(max,n);
		
	return 0;
}
