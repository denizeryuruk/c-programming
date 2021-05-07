#include <stdio.h>
#include <stdlib.h>

/* int matris[sat�r say�s�][s�tun say�s�];
   int matris[2][2]; 2ye 2i d�rt elemanl� bir matristir

           s�tun 1     s�tun 2
 sat�r 1    1            2
 
 sat�r 2    3            4
  
  �ok boyutlu dizilerin matris �eklinde bellekte tutulur.

*/

int main() {
	
	// uzun yoldan matrise de�er atama
	int matris[2][2];
	
	matris[0][0]=1;  //birinci sat�r ve birinci s�tun de�eri
	matris[0][1]=2;  //birinci sat�r�n ikinci s�tunun de�eri
	matris[1][0]=3;  //ikinci sat�r�n birinci s�tunun de�eri
	matris[1][1]=4;  //ikinci sat�r�n ikinci s�tunun de�eri
	
	printf("%d ",matris[0][0]);
	printf("%d\n",matris[0][1]);
	printf("%d ",matris[1][0]);
	printf("%d\n",matris[1][1]);
	
	matris[0][0]=matris[0][1]*2+matris[1][1]; //iki boyutlu dizilerin de�erlerini de�i�tirebiliriz
	
	printf("\n%d",matris[0][0]);
	
	printf("\n*************\n");
	
	printf("%d ",matris[0][0]*5);  // ilk de�eri 1 iken daha sonra 8 yapt�k 8*5=40 olur
	printf("%d ",matris[0][1]*5);
	printf("%d ",matris[1][0]*5);
	printf("%d ",matris[1][1]*5);
	
	
	// k�sa yoldan matrise de�er atama
	
	int matris1[2][3]={{1,2,3},{4,5,6}}; // sat�r say�s� kadar virg�l ile ay�rarak {} parentezi koyulur.
	                                 // {} i�erisine ise virg�l ile ay�rarak s�tun say�s� kadar say� yaz�l�r.
 	printf("%d ",matris1[0][0]);
 	printf("%d ",matris1[0][1]);
 	printf("%d\n",matris1[0][2]);
 	printf("%d ",matris1[1][0]);
 	printf("%d ",matris1[1][1]);
 	printf("%d ",matris1[1][2]);
 	
 	// yukar�dakini s�ra ile yazmak yerine d�ng� yard�m� ile yazabiliriz
 	
 	int matris2[2][2]={{4,5},{6,7}};
 	int i,j;
 	
    for(i=0;i<2;i++)     // i<2--> sat�r say�s�n� belirtir
    {
    	for(j=0;j<2;j++) // j<2--> s�tun say�s�n� belirtir
    	{
    		printf("%d ",matris2[i][j]);  		
		}
	}printf("\n"); // matris g�r�n�m�n� vermek i�in yaz�ld�
 	
 	// Ba�ka �rnek;
 	
 	int matris3[2][3]={{4,5,6},{9,1,5}};
 	int i,j;
 	
    for(i=0;i<2;i++)     
    {
    	for(j=0;j<3;j++) 
    	{
    		printf("%d ",matris3[i][j]);  		
		}
	}printf("\n");
 		
	return 0;
}
