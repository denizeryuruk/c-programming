#include <stdio.h>
#include <stdlib.h>

/*Boyutu ve elemanlar� kullan�c�dan alan N*M boyutlu mastristeki en b�y�k eleman� 
ve bu eleman�n sat�r ve s�tun adresini bulan c kodunu yaz�n�z*/


int main() 
{
	int satir,sutun,eleman,max=0;
	int *ptr;
	
	printf("Satir Numarasini Girin:");
	scanf("%d",&satir);
	
	printf("Sutun Numarasini Girin:");
	scanf("%d",&sutun);
	
	int dizi[satir][sutun];
	
	ptr=dizi[satir][sutun];
	
	int i,j,a,b;
	
	printf("Dizinin Elemanlarini Girin:\n");
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("[%d][%d]= ",i,j);
			scanf("%d",&dizi[satir][sutun]);
			if(dizi[satir][sutun]>max)
			{
				max=dizi[satir][sutun];
				 a=i;
				 b=j;
			}
		}
	}
	printf(" %d. satir %d. sutunun maxsimum Deger:%d ,adresi: %p",a,b,max,ptr);

	
	
	
	
	
	
	
	
	
	
	return 0;
}
