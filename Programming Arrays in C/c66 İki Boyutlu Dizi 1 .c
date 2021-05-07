#include <stdio.h>
#include <stdlib.h>

/* int matris[satýr sayýsý][sütun sayýsý];
   int matris[2][2]; 2ye 2i dört elemanlý bir matristir

           sütun 1     sütun 2
 satýr 1    1            2
 
 satýr 2    3            4
  
  çok boyutlu dizilerin matris þeklinde bellekte tutulur.

*/

int main() {
	
	// uzun yoldan matrise deðer atama
	int matris[2][2];
	
	matris[0][0]=1;  //birinci satýr ve birinci sütun deðeri
	matris[0][1]=2;  //birinci satýrýn ikinci sütunun deðeri
	matris[1][0]=3;  //ikinci satýrýn birinci sütunun deðeri
	matris[1][1]=4;  //ikinci satýrýn ikinci sütunun deðeri
	
	printf("%d ",matris[0][0]);
	printf("%d\n",matris[0][1]);
	printf("%d ",matris[1][0]);
	printf("%d\n",matris[1][1]);
	
	matris[0][0]=matris[0][1]*2+matris[1][1]; //iki boyutlu dizilerin deðerlerini deðiþtirebiliriz
	
	printf("\n%d",matris[0][0]);
	
	printf("\n*************\n");
	
	printf("%d ",matris[0][0]*5);  // ilk deðeri 1 iken daha sonra 8 yaptýk 8*5=40 olur
	printf("%d ",matris[0][1]*5);
	printf("%d ",matris[1][0]*5);
	printf("%d ",matris[1][1]*5);
	
	
	// kýsa yoldan matrise deðer atama
	
	int matris1[2][3]={{1,2,3},{4,5,6}}; // satýr sayýsý kadar virgül ile ayýrarak {} parentezi koyulur.
	                                 // {} içerisine ise virgül ile ayýrarak sütun sayýsý kadar sayý yazýlýr.
 	printf("%d ",matris1[0][0]);
 	printf("%d ",matris1[0][1]);
 	printf("%d\n",matris1[0][2]);
 	printf("%d ",matris1[1][0]);
 	printf("%d ",matris1[1][1]);
 	printf("%d ",matris1[1][2]);
 	
 	// yukarýdakini sýra ile yazmak yerine döngü yardýmý ile yazabiliriz
 	
 	int matris2[2][2]={{4,5},{6,7}};
 	int i,j;
 	
    for(i=0;i<2;i++)     // i<2--> satýr sayýsýný belirtir
    {
    	for(j=0;j<2;j++) // j<2--> sütun sayýsýný belirtir
    	{
    		printf("%d ",matris2[i][j]);  		
		}
	}printf("\n"); // matris görünümünü vermek için yazýldý
 	
 	// Baþka Örnek;
 	
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
