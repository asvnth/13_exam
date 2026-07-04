#include <unistd.h>

void print_bits(unsigned char oct){
    int i = 8;
    while(i--){
        char c = ((oct >> i) & 1) + '0';
        write(1, &c, 1);
    }
}
