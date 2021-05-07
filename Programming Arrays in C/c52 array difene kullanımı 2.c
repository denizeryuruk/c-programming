#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10

int main() {
	
/*	
	int dizi[10],i,toplam=0;
	
	printf("\n***Sininfin Ortalamasini Bulan Program***\n\n");
	
	for( i=0;i<10;i++){
		printf("%d. kisinin notu:",i+1);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	
		float sonuc=toplam/10;
	
	printf("\n sinifin ortalamasi: %.2f",sonuc);

*/

    int s[BOYUT],j;
    
    for(j=0;j<=BOYUT-1;j++)
      s[j]=2+2*j;
      
      printf("%s%13s\n","Eleman","Deger");
      
       for(j=0;j<=BOYUT-1;j++)
         printf("%7d%13d\n",j,s[j]);
	
	
	return 0;
}
