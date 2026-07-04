//#include <stdio.h>

unsigned char	swap_bits(unsigned char oct)
{
	return ((oct >> 4) | (oct << 4));
}
/*
====mthd1
unsigned char swap_bits(unsigned char octet);

int main(void)
{
    unsigned char a = 14;
    unsigned char b;

    printf("before: %u\n", a);
    b = swap_bits(a);
    printf("after : %u\n", b);

    return 0;
}

====mthd2
#include <unistd.h>

unsigned char swap_bits(unsigned char octet);

void print_bits(unsigned char octet)
{
    int i = 8;
    while (i--)
    {
        char c = ((octet >> i) & 1) + '0';
        write(1, &c, 1);
    }
}

int main(void)
{
    unsigned char a = 14;  // 00001110
    unsigned char b;

    print_bits(a);
    write(1, "\n", 1);

    b = swap_bits(a);

    print_bits(b);
    write(1, "\n", 1);

    return (0);
}
*/
