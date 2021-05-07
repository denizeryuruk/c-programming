#include <stdio.h>
#include <stdlib.h>
/*
  STRING (Harf dizinleri)

 C dilinde string'ler a�a��daki y�ntemlerle kurulabilir:

 char isim[6]="Deniz"; ---> isimden bir harf say�(6) fazla yaz�l�r \n (null) de�eri old. i�in
 
 char isim1[]="Deniz";  --->diziye atama yap�laca�� zaman say�y� belirtmek gerekmez
 char *isim2[]="Deniz"; --->pointer ile ilgili g�sterim
 char isim3[]={'D','e','n','i','z','\0'}

 printf("%s",isim);
 printf("%s",isim1);
 printf("%s",isim2);
 printf("%s",isim3);

 char isim[3][10]={"Deniz","Tugce","Ali"}; --->birden fazla karekter oldu�unda 
 printf("%s",isim[2]); --->isim[0]=deniz, isim[1]=Tugce, isim[2]=Ali yi yazd�r�r 

*/

int main() {
	
	char dizi1[20],dizi2[]="Deniz";
	int i;
	
	printf("Bir string giriniz: ");
	scanf("%s",&dizi1);
	
	printf("String1:%s \n String2:%s \n Karakterler Arasinda Bosluk String1: \n",dizi1,dizi2);
	
	for(i=0;dizi1[i]!='/0';i++)
	{
		printf("%c",dizi1[i]);
		
	}
	
	printf("\n");
	
	
	
	
	
	
	
	return 0;
}
