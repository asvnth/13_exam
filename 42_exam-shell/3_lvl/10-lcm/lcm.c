#include <unistd.h>

int ft_lcm(unsigned int a, unsigned int b){
    unsigned int i;
    if (!a || !b)
        return (0);
    if (a > b)
        i = a;
    else
        i = b;
    while (1){
        if (!(i % a) && !(i % b))
            break;
        i++;
    }
    return (i);
}
/*
void ft_putnbr(int x){
    char c;
    if (x > 9)
        ft_putnbr(x/10);
    c = x % 10 + '0';
    write(1, &c, 1);
}
int main(){
    int c = ft_lcm(3, 6);
    ft_putnbr(c);
    write(1, "\n", 1);
    return (0);
}
*/
