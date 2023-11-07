#include <stdio.h>
#include "ft_strchr.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a = 0;
    printf("\n\ntest 0\n");
    printf("me->  %s\n", ft_strchr("hello", a));
    printf("he->  %s\n", strchr("hello", a));
    printf("\n\ntest 1\n");
    printf("me->  %s\n", ft_strchr("", 'h'));
    printf("he->  %s\n", strchr("", 'h'));
    printf("\n\ntest 2\n");
    printf("me->  %s\n", ft_strchr("man", 'a'));
    printf("he->  %s\n", strchr("man", 'a'));
    printf("\n\ntest 3\n");
    printf("me->  %s\n", ft_strchr("dude", 'x'));
    printf("he->  %s\n", strchr("dude", 'x'));
    printf("\n\ntest 4\n");
    printf("he->  %s\n", strchr(NULL, 'x'));
    printf("me->  %s\n", ft_strchr(NULL, 'x'));
}
