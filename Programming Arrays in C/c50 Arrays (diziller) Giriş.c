#include <stdio.h>
#include <stdlib.h>

 // Array diziler

/*Program yazarken bazen çok fazla sayýda deðiþkene ihtiyaç duyulabilir, 300-700 gibi. 
Bu gibi durumlarda her bir deðiþkeni ayrý tanýmlamak, ayrý isim ve deðer vermek zordur. 
Ýþte bu gibi durumlarda diziler kullanýlýr */

//  int a[200]; --> veriTipi diziAdi[boyut]; (Bu bildirimle int tipinde ismi a olan 200 elemanlýk bir dizi tanýmlamýþ olduk)


int main() {
	
	int dizi[12];
	
	dizi[0]=89;
	dizi[1]=45;
	dizi[2]=12;
	
	printf("%d %d",dizi[2],dizi[0]);
	
/* Dizi elemanlarýna yukarýda belirttiðimiz gibi tek tek deðer atamasý yapabileceðimiz gibi
toplu bir þekilde de yapmak mümkündür: */

    int arrays[]= {89,45,12};
    // int arrays[3]= {89,45,12}; bu da doðrudur


	return 0;
}
