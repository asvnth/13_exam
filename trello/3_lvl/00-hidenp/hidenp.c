#include <unistd.h>

int main(int ac, char **av){
    if (ac != 3){
        write(1, "\n", 1);
        return (0);
    }
    return (0);
}
