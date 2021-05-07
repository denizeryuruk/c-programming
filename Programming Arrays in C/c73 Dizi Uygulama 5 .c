#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int dizi1[1],dizi2[1];
	int i,k,tut,sayi1,sayi2;
	
	printf("dizi1[] in boyutunu girin: ");
	scanf("%d",&sayi1);
	
	for(i=0;i<sayi1;i++)
	{
		printf("\n%d. Sayiyi Giriniz: ",i+1);
	    scanf("%d",&dizi1[i]);
	}
	
	for(i=0;i<sayi1;i++)
	{
		for(k=0;k<sayi1;k++)
		{
			if(dizi1[k]>dizi1[k+1])
			{
				tut=dizi1[k];
				dizi1[k]=dizi1[k+1];
				dizi1[k+1]=tut;
			}
		}
	}
	
	printf("\nsiralanisi: ");
	for(i=0;i<sayi1;i++)
	{
		printf("%d ",dizi1[i]);
	}
	
	
	printf("\n\ndizi2[] nin boyutunu girin: ");
	scanf("%d",&sayi2);
	
	for(x=0;x<sayi2;x++)
	{
		printf("\n%d. Sayiyi Giriniz: ",x+1);
	    scanf("%d",&dizi2[x]);
	}
	
	for(i=0;x<sayi2;x++)
	{
		for(y=0;y<sayi2;y++)
		{
			if(dizi2[y]>dizi2[y+1])
			{
				tut=dizi2[y];
				dizi2[y]=dizi2[y+1];
				dizi2[y+1]=tut;
			}
		}
	}
	printf("siralanisi: ");
	for(x=0;x<sayi2;x++)
	{
		printf("%d ",dizi2[x]);
	}

		


	
	return 0;
}
