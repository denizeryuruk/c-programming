#include <stdio.h>
#include <stdlib.h>

/*Bir zar 100 kez rastgele atýlsýn. 1’den 6’ya kadar olan zar
üzerindeki her bir tamsayýnýn kaç kez zarýn üstüne geldiðini
ekrana yazdýran programý yazýnýz.*/

int main() {
	
	int yuz,dizi[6],i;
	
	for(i=0;i<6;i++)
	{
		dizi[i]=0; //dizinin bütün baþlangýc deðerlerine 0 atadýk çünkü top. iþlemi yapacaðýmýz için ilk deðeri 0 atadýk
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
