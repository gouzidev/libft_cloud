#include "ft_split.c"
#include <stdio.h>
#include "ft_libft.h"

int main()
{
	char const *txt = "a     b";
	char **res = ft_split(txt, ' ');
	int i = 0;
	while (i < 3)
	{
		printf("-> %s\n", res[i++]);
	}
}
