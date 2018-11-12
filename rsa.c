#include <stdio.h>
#include <math.h>

long gcd(long a, long b) {
	a = abs(a);
	b = abs(b);
	long r = a % b;
	if(r != 0) gcd(b, r);
	return b;
}

int main() {
	int p = 11, q = 13, n = p * q, ec = (p - 1) * (q - 1);
	
	printf("%ld\n", gcd(13, 11));
	
	return(0);
}
