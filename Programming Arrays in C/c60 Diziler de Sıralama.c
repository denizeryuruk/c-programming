#include <stdio.h>
#include <stdlib.h>

/*  int a=5 , b=3 ;
    int gecicibellek=a ; --->gecici bellek art�k burada 5
    a=b ; ---> a de�eri bo�ald���ndan art�k b nin de�eri olan 3 t�r
    b=gecicibellek ; ---> b de�erine saklad���m�z 5 de�eri at�yoruz

ikili ikili kar��la�t�rma yaparak d�ng�ler ve ko�ul ifadeleriyle de�erlerin yerini de�i�tiricez,
k���kten b�y�y�e ya da b�y�kten k����e s�ralan�r
*/


int main() {
	
	int dizi[]={89,7,1,68,9,8}; // max 74 kadar derliyor dev c
	int i,j,gecicibellek;
	
	for(i=0;i<6;i++) // dizinin b�t�n de�erlerini bellekte tutmak i�in kullan�lan for 
	{
		for(j=0;j<6;j++) //dizi de�erlerini kar��la�t�rma yapmak i�in kullan�lan for
		{
			if(dizi[j]>dizi[j+1])
			{
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecicibellek;
			}
		}
	}
	
	for(i=0;i<6;i++) // yeni s�ralama ile t�m de�erleri tekrar yazd�rmak i�in kullan�lan for
	{
		printf("%d ",dizi[i]);
	}
	
		
	return 0;
}
