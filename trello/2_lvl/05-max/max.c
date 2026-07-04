#include <unistd.h>

int max(int* tab, unsigned int len){
    int result = tab[0];
    unsigned int i = 1;
    if (len == 0)
        return(0);
    while (i < len){
        if (tab[i] > result)
            result = tab[i];
        i++;
    }
    return(result);
}
