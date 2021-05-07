#include <stdio.h>
#include <stdlib.h>

/* int a[7]={30,56,35,78,31,71,40}
dizisi olduðunu düþünürsek,kodun ekran çýktýsý þu þekilde olmalýdýr:
tek sayýlarin ortalamasi= 45.66
çift sayilarin ortalamasi=51
Not:dizide hiç tek/çift sayi bulunmayabilir.Bu durumda sýfýra bölme hatasý yapýlmamalý*/

int main() {
	
	int a[7]={30,56,35,78,31,71,40},i;
	int ciftsayi=0,ciftsayitop=0; float teksayi=0,teksayitop=0;
	int ciftort; float tekort;
	
	for(i=0;i<7;i++)
	{
		if(a[i]%2==0)
		{
		   ciftsayitop+=a[i];
		   ++ciftsayi;	
		}
		else
		{
			teksayitop+=a[i];
			++teksayi;
		}
			
	}
	
	printf("a[7]=");
	
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	

	ciftort=ciftsayitop/ciftsayi;
	tekort=teksayitop/teksayi;
	
	if(teksayi>0)
	{
		printf("\n\nTek sayilarin ortalamasi= %.2f\n",tekort);
	}
	else
	{
		printf("Dizide tek sayi yoktur.");
	}
	
	
	if(ciftsayi>0)
	{
		printf("\nCift  sayilarin ortalamasi %d\n",ciftort);
	}
	else
	{
		printf("Dizide cift sayi yoktur.");
	}
	
	return 0;
}
