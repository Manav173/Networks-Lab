//Write a program to find out if the underlying architecture/machine is little endian or big endian.

#include <stdio.h>

int main()
{
    unsigned int num = 0x1A23FEB2;
    unsigned char *c = (unsigned char*) &num;
    printf("\n The LSB of the given number is B2");
    printf("\n The number stored in LSB location is extracted as : %X", *c);

    if(*c == 0xB2)
        printf("\n Underlying arcchitecture is Little Endian.");
    else
        printf("\n Underlying arcchitecture is Big Endian.");

    return 0;
}
