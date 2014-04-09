#include <studio.h>

#define BitShift 3
#define BitsPerChar 8
#define BitMask 0x07
#define MaxNumber 1024
#define Numbers 10

char BitArray[(MaxNumber/BitsPerChar) + 1];

void Set(char a[], i)
{
	 a[i>>BitShift] |= 1<< ( i & BitMask);
}

char Get(char a[], i)
{
	 return a[i>>BitShift] & = 1<< ( i & BitMask);
}

void Clear(char a[], i)
{
	a[i>>BitShift] &= ~(1<< ( i & BitMask));
}

int main(void)
{
	int b[Numbers] = {1,3,5,7,9,11,15,19,21,25}
}