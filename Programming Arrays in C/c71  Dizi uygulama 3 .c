#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int boyut1,boyut2,topboyut=0;
	int i,index1,index2,topindex;
	
	printf("Dizinin ilk boyutunu giriniz: ");
	scanf("%d",&boyut1);
	
	int dizi1[boyut1];
	
	printf("Ilk dizinin elemanlarini giriniz:");
	
	for(i=0;i<boyut1;i++)
	{
		scanf("%d",&dizi1[i]);
	}
	
	printf("Ikinci dizinin boyutunu giriniz: ");
	scanf("%d",&boyut2);
	
	int dizi2[boyut2];
	
	printf("Ikinci dizinin elemanlarini giriniz:");
	
	for(i=0;i<boyut2;i++)
	{
		scanf("%d",&dizi2[i]);
	}
	
	topboyut=boyut1+boyut2;
	
	int topdizi[topboyut];
	
	index1=0;
	index2=0;
	
	for(topindex=0;topindex<topboyut;topindex++)
	{
		if(index1>=boyut1 || index2>=boyut2)
		{
			break;
		}
		
		if(dizi1[index1]<=dizi2[index2])
		{
			topdizi[topindex]=dizi1[index1];
			index1++;
			printf("%d",topdizi[topindex]);
		}
		else 
		{
			topdizi[topindex]=dizi2[index2];
			index2++;
			printf("%d",topdizi[topindex]);	
		}			
	}
	
	while (index1<index2)
	{
		topdizi[topindex]=dizi1[index1];
		topindex++;
		index1++;
	}
	
	while(index2<index1)
	{
		topdizi[topindex]=dizi2[index2];
		topindex++;
		index2++;
	}
	
	printf("\n iki dizinin birlestirilip siralanmis hali: ");
	
	for(i=0;i<topboyut;i++)
	{
		printf("%d ",topdizi[i]);
	}
		
	return 0;
}





	

