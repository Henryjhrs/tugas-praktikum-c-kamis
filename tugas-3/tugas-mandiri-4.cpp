#include <stdio.h>
#include <math.h> 

int main (){
	int bilangan;
	
	printf("Masukkan sebuah bilangan positif : ");
	scanf("%d",&bilangan);
	
	if (bilangan % 2 == 0 ) {
		printf("Genap\n");
	}	else {
		printf("Ganjil\n");
	}
		return 0;	
}	