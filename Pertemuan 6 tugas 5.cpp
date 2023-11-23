#include <stdio.h>
int main()
{
	double saldo = 1000000;
	double bunga = 0.02;
	for (int bulan = 1; bulan <= 10; ++bulan){
		saldo = saldo + (saldo * bunga);
		}
		printf("Jumlah uang setelah 10 bulan: Rp. %.2f\n", saldo);
		return 0;
	}
