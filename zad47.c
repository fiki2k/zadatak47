// Program ce decimalni broj pretvorit u oktalni pomocu funkcije.

#include <stdio.h>
#include <math.h>
int decimalniUktalni(int decimalni)
{
    int oktalni = 0, temp = 1;

    while (decimalni != 0)
    {
    	oktalni = oktalni + (decimalni % 8) * temp;
    	decimalni = decimalni / 8;
        temp = temp * 10;
    }

    return oktalni;
}
int main()
{
    int decimalni;

    printf("Unesi decimalni broj: ");
    scanf("%d", &decimalni);

	// Pozivanje funkcije
    printf("Oktalni broj je: %d", decimalniUktalni(decimalni));

    return 0;
}
