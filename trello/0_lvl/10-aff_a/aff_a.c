#include <unistd.h>
int main(int argc, char **argv){
    int i;
    if (argc != 2){
        write(1, "a\n", 2);
        return(0);
    }
    i = 0;
    while(argv[1][i]){
        if (argv[1][i] == 'a'){
           write(1, "a\n",2);
           return(0);
        }
        i++;
    }
    write(1, "\n", 1);
    return(0);
}

/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "a\n", 2), 0);
	while (*argv[1])
	{
		if (*argv[1] == 'a')
			return (write(1, "a\n", 2), 0);
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
 */
