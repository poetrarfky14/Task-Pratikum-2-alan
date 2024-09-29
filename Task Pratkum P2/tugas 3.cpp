#include <stdio.h>
#include <math.h>

int main() {
	float alas = 4.0;
	float tinggi = 5.0;
	float sisimiring;
	
	sisimiring = sqrt ((alas*alas) + (tinggi*tinggi));
	 
	printf ("\t alas \t\t= %.2f cm\n ",alas);
	printf ("\t tinggi \t= %.2f cm\n ",tinggi);
	printf ("\t sisi miring segitiga adalah adalah %.2f cm\n",sisimiring);
	
	return 0;
}
