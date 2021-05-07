#include <stdio.h>
#include <stdlib.h>

/* statik dizilerde programcý tarafýndan ilk deðer atanmazsa otomatik olarak 0 deðeri atanýr.
otomatik dizide ilk deðerler önceden atandýðý için  ikinci kez çaðýrdýðýmýzda atadýðmýz deðerler yine gelir.
çünkü bellekte bellli bir yere sahip ilk deðerleri verdiðimiz için*/

// Statik dizilere 0 ilk deðeri atandý

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



