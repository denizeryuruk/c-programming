#include <stdio.h>
#include <stdlib.h>

/*  �� boyutlu ya da daha y�ksek boyutlu Dizi
 
 ana katag�rinin alt kategorisinin alt kategorisi....
 
 int a[2][20][50]; ----> 2 okulun 20 s�n�f�n 50 ��rencisi
 int b[4][2][20][50]; ----> 4 ildeki 2 okulun 20 s�n�f�n 50 ��rencisi
 
*/


int main() {
	
	int okul[2][2][5];
	int i,j,k,say; // ne kadar dizi tan�mlarsak o kadar for d�ng�s� laz�m
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<5;k++)
			{
				printf("%d. Okulun %d. Siniftaki %d. Ogrencinin Notu: ",i+1,j+1,k+1);
				scanf("%d",&okul[i][j][k]);
				if(okul[i][j][k]>50 && okul[i][j][k]<100 )
				{
					say++; //  bu for da her i�lem yapt���nda a�a��daki for da yazd�rtmay� UNUTMA
				}
			}
		}
	}
	
	printf("\n\n***********************************************\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<5;k++)
			{
				printf("%d. Okulun %d. Siniftaki %d. Ogrencinin Notu= %d dir. \n",i+1,j+1,k+1,okul[i][j][k]);	
			}
		}
	}
	
	printf("\n\nSinifi Gecenlerin Sayisi %d ",say);
	
	
	
	

	
	return 0;
}
