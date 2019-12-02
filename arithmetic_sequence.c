#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    unsigned int sn, n=0, d=2, a0=1, sum=0, lastSum;
    scanf("%u", &sn);
    while(1) {
    	lastSum=sum;
    	n++;
    	sum=a0*n+n*(n-1)*d/2;
    	int an = (a0+(n-1)*d);
    	if (sum >= sn) {
    		printf("%u %u\n", n, (sn-lastSum));
    		break;
    	}
	}
    return 0;

}
