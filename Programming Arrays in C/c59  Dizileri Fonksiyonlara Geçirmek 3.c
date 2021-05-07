#include <stdio.h>
#include <stdlib.h>
#define n 5
// Dizileri ve dizi elemanlarýný fonksiyonlara geçirme

void diziAyarla(int [],int);
void ElemaniAyarla(int);

int main() {
	
	int a[n]={0,1,2,3,4},i;
	
	printf("Butun dizinin referansa gore cagrilarak gecmenin etkileri:\n\n Orijinal dizinin degerleri:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	
	printf("\n");
	
	
	diziAyarla(a,n);  // referansa göre çaðrýlarak geçti
	printf("Ayarlanan Dizinin Degerleri:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	
	
	printf("\n\n\n Dizi elemaninin degere gore cagrilarak gecmesinin etkileri:\n\n a[3] degeri %d\n",a[3]);
	
	ElemaniAyarla(a[3]);
	printf("a[3] degeri %d\n",a[3]);
		
	return 0;
}

void diziAyarla(int b[],int boyut)
{
	int j;
	
	for (j=0;j<boyut;j++)
	{
		b[j]*=2;
	}
	
}

void ElemaniAyarla(int e)
{
	printf("ElemaniAyarla da ki Deger %d dir.\n",e*=2);	
	
}




