#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Kullan�c�dan say� alarak matris olu�turma;
	
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
	for(i=0;i<2;i++)   // her birini tekrardan ekrana yazd�rmak i�in 
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",matris[i][j]);	
		}
		printf("\n");
	}
	
	
	
	return 0;
}
