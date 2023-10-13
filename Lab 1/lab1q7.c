/*Write a program to extract each byte as character from the representation
of multibyte data types on your machine and store the above extracted
bytes with the following structure. Now display the contains of structure
members.*/

#include <stdio.h>

struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};

int main()
{
    struct pkt mP;

    unsigned int m = 0x12345678;

    mP.ch1 = (char)(m & 0xFF);
    mP.ch2[0] = (char)((m >> 8) & 0xFF);
    mP.ch2[1] = (char)((m >> 16) & 0xFF);
    mP.ch3 = (char)((m >> 24) & 0xFF);

    printf("ch1: %x\n", mP.ch1);
    printf("ch2[0]: %x\n", mP.ch2[0]);
    printf("ch2[1]: %x\n", mP.ch2[1]);
    printf("ch3: %x\n", mP.ch3);

    return 0;
}
