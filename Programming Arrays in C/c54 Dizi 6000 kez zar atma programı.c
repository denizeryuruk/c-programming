#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 6

//6000 kez zar atma programý

int main() {
	
	int dizi[n]={0};
	int i,j;
	
	srand(time(NULL));
	
	for(j=0;j<6000;j++)
	{
		i= rand() % 6 + 1;
		++dizi[i];  //switch yerine geçer		
	}
	
	printf("%s%17s\n","Yuz","Deger");
	
	for(i=0;i<n;i++)
	{
		printf("%3d%17d\n",i+1,dizi[i]);
	}
	
	
	
	return 0;
}
