#include <stdio.h>
#include <stdlib.h>

/*Bir zar 100 kez rastgele at�ls�n. 1�den 6�ya kadar olan zar
�zerindeki her bir tamsay�n�n ka� kez zar�n �st�ne geldi�ini
ekrana yazd�ran program� yaz�n�z.*/

int main() {
	
	int yuz,dizi[6],i;
	
	for(i=0;i<6;i++)
	{
		dizi[i]=0; //dizinin b�t�n ba�lang�c de�erlerine 0 atad�k ��nk� top. i�lemi yapaca��m�z i�in ilk de�eri 0 atad�k
	}
	for(i=0;i<100;i++)
	{
		yuz=1+rand()%6;
	
	
	switch(yuz)
	{
		case 1:
			dizi[0]++;
			break;
			
			case 2:
				dizi[1]++;
				break;
				
				case 3:
					dizi[2]++;
					break;
					
					case 4:
						dizi[3]++;
						break;
						
						case 5:
							dizi[4]++;
							break;
							
							case 6:
								dizi[5]++;
								break;
			
	}
} // for un bitimi	

	for(i=0;i<6;i++)
	{
		printf("%d gelen zar sayisi: %d\n",i+1,dizi[i]);
	}

	return 0;
}
