#include <stdio.h>
#include <stdlib.h>

 // Array diziler

/*Program yazarken bazen �ok fazla say�da de�i�kene ihtiya� duyulabilir, 300-700 gibi. 
Bu gibi durumlarda her bir de�i�keni ayr� tan�mlamak, ayr� isim ve de�er vermek zordur. 
��te bu gibi durumlarda diziler kullan�l�r */

//  int a[200]; --> veriTipi diziAdi[boyut]; (Bu bildirimle int tipinde ismi a olan 200 elemanl�k bir dizi tan�mlam�� olduk)


int main() {
	
	int dizi[12];
	
	dizi[0]=89;
	dizi[1]=45;
	dizi[2]=12;
	
	printf("%d %d",dizi[2],dizi[0]);
	
/* Dizi elemanlar�na yukar�da belirtti�imiz gibi tek tek de�er atamas� yapabilece�imiz gibi
toplu bir �ekilde de yapmak m�mk�nd�r: */

    int arrays[]= {89,45,12};
    // int arrays[3]= {89,45,12}; bu da do�rudur


	return 0;
}
