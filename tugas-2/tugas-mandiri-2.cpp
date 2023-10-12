#include <stdio.h>
#include <math.h>

	int main () {
		float alas, tinggi, sisi_miring;
		
		alas = 4.0;
		tinggi = 5.0;
		
		sisi_miring = sqrt (alas * alas + tinggi *tinggi);
		
		printf("Panjang alas : %.2f cm", alas);
		printf("\nPanjang tinggi : %.2f cm", tinggi);
		printf("\nRumus : a x a + t x t\n");
	    printf("\nPanjang sisi miring : %.2f cm", sisi_miring);
	    
	    return 0;
	}
