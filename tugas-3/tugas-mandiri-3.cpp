#include <stdio.h>
#include <math.h>

int main (){
	float tinggi,alas,sisi_miring;
	
	alas = 4.0;
	tinggi = 5.0;
	
	sisi_miring = sqrt(alas * alas + tinggi *tinggi);
	
	printf("Panjang alas : %.2f cm\n",alas);
	printf("Panjang tinggi : %.2f cm\n",tinggi);
	printf("Rumus = a x a + t x t\n");
	printf("Panjang sisi miring : %.2f cm\n",sisi_miring);
	
	return 0;
}