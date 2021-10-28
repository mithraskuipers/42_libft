# include "ft_split.c"

void kaas(void *test)
{
    ft_putstr_fd("- ", 1);
    ft_putendl_fd((char*)test, 1);
}

int main (void)
{
	t_list *head = ft_lstnew("gert");

	ft_lstadd_back(&head, ft_lstnew("rowan"));
	ft_lstadd_back(&head, ft_lstnew("aids"));
	ft_lstadd_back(&head, ft_lstnew("tering"));
	ft_lstadd_back(&head, ft_lstnew("hoer"));


    ft_lstiter(head, &kaas);
	return (0);
}
