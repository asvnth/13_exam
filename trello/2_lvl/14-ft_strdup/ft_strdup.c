#include <stdlib.h>

char	*strdup(const char *s){
	char	*copy;
	char	*start;
	int		len = 0;
	while (s[len])
		len++;
	start = malloc(len + 1);
	if (!start)
		return (0);
	copy = start;
	while (*s)
		*copy++ = *s++;
	*copy = '\0';
	return (start);
}
