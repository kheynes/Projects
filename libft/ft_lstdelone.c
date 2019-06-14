#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	lst = *alst;
	del(ls->content, lst->content_size);
	free(*alst);
	*alst = NULL;
}
