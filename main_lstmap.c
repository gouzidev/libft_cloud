#include "ft_libft.h"
#include "ft_lstmap.c"

char	*print_content(void *node)
{
	return ((char *)(((t_list *)node)->content));
}

void delete (void *content)
{
	int	i;

	i = 0;
	while (((char *)content)[i])
	{
		((char *)content)[i++] = 'x';
	}
}
int	main(void)
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	n1->content = "1";
	n2->content = "2";
	n3->content = "3";
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	ft_lstmap(n1, (void *)&print_content, delete);
}
