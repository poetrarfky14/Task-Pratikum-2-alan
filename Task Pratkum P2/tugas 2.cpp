#include <stdio.h>

int main (){
	float diameter = 15.0;
	float r = diameter / 2.0;
	float volume;
	
	volume = (4.0 / 3.0) * 3.14159 * (r*r*r);
	
	printf(" volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);
	
	return 0;	
}
