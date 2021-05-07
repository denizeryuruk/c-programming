#include <stdio.h>
#include <stdlib.h>

/* statik dizilerde programc� taraf�ndan ilk de�er atanmazsa otomatik olarak 0 de�eri atan�r.
otomatik dizide ilk de�erler �nceden atand��� i�in  ikinci kez �a��rd���m�zda atad��m�z de�erler yine gelir.
��nk� bellekte bellli bir yere sahip ilk de�erleri verdi�imiz i�in*/

// Statik dizilere 0 ilk de�eri atand�

void statikDizi(void);

void otomatikDizi(void);

int main() {
	
	printf("***Her Fonksiyona Ilk Cagiri***\n");
	statikDizi();
	otomatikDizi();
	
	printf("\n\n\n***Her Fonksiyona Ikinci Cagiri***\n");
	statikDizi();
	otomatikDizi();
	
	return 0;
}

void statikDizi(void)
{
	static int a[3];
	int i;
	
	printf("\nStatik Dizi Girerken Degerler:\n ");
	
	for(i=0;i<3;i++)
	   printf("dizi1[%d]=%d\n",i,a[i]);
	 
	printf("\n\nStatik Diziden Cikarken Degerler:\n ");
	
	for(i=0;i<3;i++)
	   printf("dizi1[%d]=%d\n",i,a[i]+=5);
}

void otomatikDizi(void)
{
	int a[3]={1,2,3};
	int i;
	
	printf("\n\nOtomatik Dizi Girerken Degerler:\n ");
	
	for(i=0;i<3;i++)
	   printf("dizi1[%d]=%d\n",i,a[i]);
	   
	printf("\n\nOtomatik Diziden Cikarken Degerler:\n ");
	
	for(i=0;i<3;i++)
	   printf("dizi1[%d]=%d\n",i,a[i]+=5);
}



