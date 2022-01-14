#include <stdio.h>


int main(void)
{
	int pn;
	int dn;
	float nf;

	printf("bonsoir, veuillez taper les nombres qui determineront votre avenir");
	scanf("%d/n", &pn );
	scanf("%d/n", &dn );
	
	printf(" %d + %d =  %f \n", pn, dn, nf = pn + dn );

       	printf(" %d - %d =  %f \n", pn, dn, nf = pn - dn );

	printf(" %d * %d =  %f \n", pn, dn, nf = pn * dn );

	printf(" %d / %d =  %.3f \n", pn, dn, nf = pn / dn );

	return 0;
}
