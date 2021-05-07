#include <stdio.h>
#include <stdlib.h>

/* 7 elemana sahip int türden bir diziye [0 90] arasýnda rastgale deðiþen deðerler
atayan ve dizinin tek ve çift elemanlarýnýn aritmetik ortalamasýný ayrý ayrý hesaplayan program*/


int main() {
	
	int teksayi,ciftsayi,tektop=0,cifttop=0,ortcift,orttek;
	int dizi[7],i;
	
	for(i=0;i<7;i++)
	{
		dizi[i]=rand()%90;	
		
		if(dizi[i]%2==0)
		{
			cifttop+=dizi[i];
			ciftsayi++;
		}
		else
		{
			tektop+=dizi[i];
			teksayi++;
		}
			
	}
	
	printf("dizi[7]=");
	for(i=0;i<7;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	ortcift=cifttop/ciftsayi;
	orttek=tektop/teksayi;
	
	if(ciftsayi>0)
	{
		printf("\n\nCift Sayilarin Ortalamasi: %d dir.\n",ortcift);
	}
	else
	printf("dizi de cift sayi yoktur.");
	
	if(teksayi>0)
	{
		printf("Tek Sayilarin Ortalamasi %d dir.",orttek);
	}
	else
	printf("dizi de tek sayi yoktur.");
	
	
	return 0;
}
