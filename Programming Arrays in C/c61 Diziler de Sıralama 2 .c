#include <stdio.h>
#include <stdlib.h>

// Kullanýcýdan sayýlar alarak sýralama yapma

int main() {
	
	int dizi[5],i,j,gecicibellek;
	
	printf("***Siralama Yapmak Icin 5 Tane Sayi Giriniz****\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d. Sayiyi Giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)  // (j<5-i) yaparsak sýralamanýn daha kýsa sürede bitmesini saðlarýz
		{
			if(dizi[j]>dizi[j+1])
			{
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecicibellek;
				
			}	
		}	
	}
	
	printf("\n\nSiralanisi Su Sekildedir:\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d ",dizi[i]);
	}
		
	return 0;
}
