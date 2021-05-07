#include <stdio.h>
#include <stdlib.h>
#define n 10

// çizgi grafik yazdýrma programý

int main() {
	
	int dizi[n]={10,8,4,35,21,18,1,16,28,3};
	int i,j;
	
	printf("%s%13s%17s\n","Eleman","Deger","Grafik");
	
	for(i=0;i<n;i++) 
	{ 
	  printf("%7d%13d ",i,dizi[i]);

		for(j=0;j<=dizi[i];j++)
		{
			printf("%c",'*');
		}	
		printf("\n");
	}
	
	
	return 0;
}
