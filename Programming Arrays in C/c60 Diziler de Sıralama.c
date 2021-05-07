#include <stdio.h>
#include <stdlib.h>

/*  int a=5 , b=3 ;
    int gecicibellek=a ; --->gecici bellek artýk burada 5
    a=b ; ---> a deðeri boþaldýðýndan artýk b nin deðeri olan 3 tür
    b=gecicibellek ; ---> b deðerine sakladýðýmýz 5 deðeri atýyoruz

ikili ikili karþýlaþtýrma yaparak döngüler ve koþul ifadeleriyle deðerlerin yerini deðiþtiricez,
küçükten büyüyðe ya da büyükten küçüðe sýralanýr
*/


int main() {
	
	int dizi[]={89,7,1,68,9,8}; // max 74 kadar derliyor dev c
	int i,j,gecicibellek;
	
	for(i=0;i<6;i++) // dizinin bütün deðerlerini bellekte tutmak için kullanýlan for 
	{
		for(j=0;j<6;j++) //dizi deðerlerini karþýlaþtýrma yapmak için kullanýlan for
		{
			if(dizi[j]>dizi[j+1])
			{
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecicibellek;
			}
		}
	}
	
	for(i=0;i<6;i++) // yeni sýralama ile tüm deðerleri tekrar yazdýrmak için kullanýlan for
	{
		printf("%d ",dizi[i]);
	}
	
		
	return 0;
}
