#include<stdio.h>
int main()
{
    long long int bin, hexa = 0;
    long long int i = 1, r;

    printf("Enter Binary Number: ");
    scanf("%lld", &bin);

    while (bin != 0)
    {
        r = bin % 10;
        hexa = hexa + r * i;
        i = i * 2;
        bin = bin / 10;
    }
    
    printf("Hexadecimal Value: %lx", hexa);
    return 0;
}