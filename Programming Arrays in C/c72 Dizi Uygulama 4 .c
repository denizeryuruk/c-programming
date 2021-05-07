#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int dizi1[]={0},dizi2[]={0};
	int i,sayi1,sayi2;
		
	printf("dizi1[] in boyutunu girin: ");
	scanf("%d",&sayi1);
	
	for(i=0;i<sayi1;i++)
	{
		printf("\n%d. Sayiyi Giriniz:",i+1);
		scanf("%d",&dizi1[i]);
	}
	
	
	printf("\n\ndizi2[] nin boyutunu girin: ");
	scanf("%d",&sayi2);
	
	for(i=0;i<sayi2;i++)
	{
		printf("\n%d. Sayiyi Giriniz:",i+1);
		scanf("%d",&dizi2[i]);
	}
	

	printf("\n\ndizi3[] un siralanisi: ");
	
	for(i=0;i<sayi1;i++)
	{
		printf("%d ",dizi1[i]);
	}
	for(i=0;i<sayi2;i++)
	{
		printf("%d ",dizi2[i]);
	}

	
	return 0;
}
