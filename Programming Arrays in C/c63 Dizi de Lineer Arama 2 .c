#include <stdio.h>
#include <stdlib.h>


int main() {

	int dizi[]={41,74,25,10,8,20,65,58,44,12};
	int sayi, i,bulundu=0; // bulundu=0 yazman�n nedeni bulunduyu ba�ta false kabul etmemiz
	
	printf("Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	for(i=0;i<10;i++) 
	{
		if(dizi[i]==sayi)
		{
			bulundu=1; // if do�ruysa bulundu=1 olucak true de�erini d�nd�rm�� olucak
			break;    // true oldu�undan for d�ng�s�nden ��km�� olucak   
		}
	}
	if(bulundu==1)  //kullan�c�ya bilgi vermek
	{
		printf("Girilen %d degeri dizinin %d. indisinde dir.",sayi,i);
	}
	else
	printf("Sayi Bulunamadi");
	
	return 0;
}
