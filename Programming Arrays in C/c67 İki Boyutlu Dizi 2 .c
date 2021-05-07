#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Kullanýcýdan sayý alarak matris oluþturma;
	
	int i,j;
	
	int matris[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d. Sayi Giriniz: ",i+1);
			scanf("%d",&matris[i][j]);
		}
	}
	
    printf("\n");
	for(i=0;i<2;i++)   // her birini tekrardan ekrana yazdýrmak için 
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",matris[i][j]);	
		}
		printf("\n");
	}
	
	
	
	return 0;
}
