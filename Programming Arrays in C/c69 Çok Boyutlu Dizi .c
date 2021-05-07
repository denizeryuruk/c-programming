#include <stdio.h>
#include <stdlib.h>

/*  üç boyutlu ya da daha yüksek boyutlu Dizi
 
 ana katagörinin alt kategorisinin alt kategorisi....
 
 int a[2][20][50]; ----> 2 okulun 20 sýnýfýn 50 öðrencisi
 int b[4][2][20][50]; ----> 4 ildeki 2 okulun 20 sýnýfýn 50 öðrencisi
 
*/


int main() {
	
	int okul[2][2][5];
	int i,j,k,say; // ne kadar dizi tanýmlarsak o kadar for döngüsü lazým
	
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
					say++; //  bu for da her iþlem yaptýðýnda aþaðýdaki for da yazdýrtmayý UNUTMA
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
