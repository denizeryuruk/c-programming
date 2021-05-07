#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	
	// int dizi[2][5]; içerisine sayi ile tanýmlayabiliriz
	int i,k,a,b,satir,sutun,buyuk=0;
	
	printf("Dizinin Satir Sayisinini Girin:");
	scanf("%d",&satir);
	
	printf("Dizinin Sutun Sayisinini Girin:");
	scanf("%d",&sutun);
	
	int dizi[satir][sutun];
	
	srand(time(NULL));
	
	for(i=0;i<satir;i++)
	{
		for(k=0;k<sutun;k++)
		{
		
			dizi[i][k]= -25 + rand() % 51;
			printf("dizi[%d][%d]=%3d\n",i,k,dizi[i][k]);
			
			if(dizi[i][k]>buyuk)
			{
				buyuk=dizi[i][k];
				a=i; 
				b=k;
			}	
		}	
	}
	printf("Dizideki en büyük degeger: %d\n",buyuk);
	printf("%d.satir ve %d.sutunda dir",a,b);	
	

	
	
	
	
	

	
	return 0;
}
