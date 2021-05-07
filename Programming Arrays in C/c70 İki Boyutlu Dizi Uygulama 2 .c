#include <stdio.h>
#include <stdlib.h>
#define ogrenciler 3
#define sinavlar 4

//iki boyutlu dizi kullanan örnek

int minimum(const int [][sinavlar],int,int);
int maksimum(const int [][sinavlar],int,int);
double ortalama(const int[],int);
void diziyiYazdir(const int[][sinavlar],int,int);


int main() {
	
	int k;
	const int ogrenciNotlari[ogrenciler][sinavlar]={{77,68,86,73},{96,87,89,78},{70,90,86,81}};
	
	printf("Dizi:\n");
	
	diziyiYazdir( ogrenciNotlari,ogrenciler, sinavlar);
	printf("\n\n En Dusuk Not:%d\n En Yuksek Not:%d\n",minimum(ogrenciNotlari,ogrenciler,sinavlar),maksimum(ogrenciNotlari,ogrenciler,sinavlar));
	
	for(k=0;k<ogrenciler;k++)
	{
		printf("Ogrenci %d icin ortalama Not %.2f\n",k,ortalama(ogrenciNotlari[k],sinavlar));
	}
		
	return 0;
}

int minimum(const int notlar[][sinavlar],int ogrenci,int test)
{
	int i,j,dusukNot=100;
	
	for(i=0;i<ogrenci;i++)
	{
		for(j=0;j<test;j++)
		{
			if(notlar[i][j]<dusukNot) // lineer arama
				dusukNot=notlar[i][j];
		}
	}
	return dusukNot;
		
}

int maksimum(const int notlar[][sinavlar],int ogrenci,int test)
{
	int i,j,yuksekNot=0;
	
	for(i=0;i<ogrenci;i++)
	{
		for(j=0;j<test;j++)
		{
			if(notlar[i][j]>yuksekNot) // lineer arama 
			yuksekNot=notlar[i][j];
		}
	}
	return yuksekNot;
	
}

double ortalama(const int NotlarinTop[],int test)
{
	int i,toplam=0;
	
	for(i=0;i<test;i++)
	{
		toplam+=NotlarinTop[i];
	}
	return (double)toplam/test;	
}

void diziyiYazdir(const int notlar[][sinavlar],int ogrenci,int test)
{
	int i,j;
	
	printf("                     [0]  [1]  [2]  [3]");
	
	for(i=0;i<ogrenci;i++)
	{
		printf("\n ogrenciNotlari[%d]",i);
		for(j=0;j<test;j++)
	    {
		   printf("%5d",notlar[i][j]);
	    }
	}
			
}




