#include <stdio.h>
#include <stdlib.h>
# define BOYUT 5


int main() {
/*	
	char *ad[]={"d","e","n","i","z"};
	int i=0;
	
	for(;i<5;i++){
		printf("[%d].harf= %s\n\n",i,ad[i]);
	}
	
*/
/*
	int sayi[]={32,27,64,17,45,58,43,23,89,11};
	int i=0;
	
	printf("%8s %21s\n","Eleman","Deger");
	
	for(;i<10;i++){
		printf("%6d -----> %14d\n",i,sayi[i]);
	}
	
*/

     int s[BOYUT],i,toplam=0;
     
      for(i=0;i<BOYUT;i++) 
	  {
      	printf("%d. Kisisninin notu: ",i+1);
      	scanf("%d",&s[i]);
      	toplam+=s[i]; 	
	  }
      
     float ortalama= toplam/BOYUT;
     
     printf("Sinifin Ortalamasi: %.2f",ortalama);
  
   

	
	return 0;
}
