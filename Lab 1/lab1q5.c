/*Write a program to extract each byte as character from the representation
of multibyte data types on your machine and its corresponding memory
locations. By studying the data in memory, findout if the underlying
architecture/machine is little endian or big endian */

#include <stdio.h>

int main()
{
    unsigned int num = 0x1A23FEB2;
    unsigned char *c = (unsigned char*) &num;
    printf("\n The LSB of the given number is b2");
    printf("\n The number stored in LSB location is extracted as : %0x", *c);

    if(*c == 0xB2)
        printf("\n Underlying arcchitecture is Little Endian.\n");
    else
        printf("\n Underlying arcchitecture is Big Endian.\n");

    printf("\nByte-No\tByte-Address\tValue-Stored \n");
    for(int i = 0; i < sizeof(num); i++)
    {
        printf("%d \t %u \t %X \n",i,(unsigned int)c,*c);
        c++;
    }

    return 0;
}
