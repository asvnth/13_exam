#include <unistd.h>
int main(int ac, char **av){
	if (ac != 2)
		return 1;
	char stack[1000];
	int top = 0;
	int i = 0;
	while (av[1][i]){
		if (av[1][i] == '(' || av[1][i] == '{' || av[1][i] == '[')
			stack[top++] = av[1][i];
		else if (av[1][i] == ')' || av[1][i] == ']' || av[1][i] == '}'){
			if (top == 0 || !((av[1][i] == ')' && (stack[top - 1] == '(')) 
					|| (av[1][i] == ']' && (stack[top - 1] == '['))
					|| (av[1][i] == '}' && (stack[top - 1] == '{')))){
						write(1, "0\n", 2);
						return 1;
					}
					top--;
		}
		i++;
	}
	if (!top)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return 0;
}
