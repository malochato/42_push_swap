/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:57:16 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/31 16:42:31 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lst_check_if_equal(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	current = begin_list;
	while (current)
	{
		if (cmp(current->content, data_ref) == 0)
			return (0);
		current = current->next;
	}
	return (1);
}

void	populate_list(t_list **lst, void *content)
{
	t_list	*new;

	new = ft_lstnew(content);
	if (!new)
	{
		free(content);
		ft_lstclear(lst, free);
		ft_error();
	}
	if (*lst == NULL || ft_lst_check_if_equal(*lst, content, &cmp_int))
	{
		ft_lstadd_back(lst, new);
	}
	else
	{
		free(new);
		free(content);
		ft_lstclear(lst, free);
		ft_error();
	}
}


// dans cette fonction il faut regarder comment voir si c'est pas des long, des lettres etc..
int *create_integer(char *str)
{
	int		*value;
	//char	*cmpstr;

	if (str == NULL || *str == 0)
		return (NULL);

	value = malloc(sizeof(int));
	if (!value)
		return (NULL);	

	*value = ft_atoi(str);

/*
	ft_printf("%s -- ", ft_itoa(*value));
	cmpstr = ft_itoa(*value);
	ft_printf("%d\n", ft_strncmp(str, cmpstr, ft_strlen(str)));
	*/
	// il faut que je fasse gaffe au long et aussi a quand c'est des lettres. 
	return (value);
}

t_list	*ft_create_list(int argc, char **argv)
{
	int		i;
	int		*value;
	t_list	*lst;

	lst = NULL;
	i = 0;
	while (i < argc)
	{
		value = create_integer(argv[i]);
		if (value == NULL)
		{
			ft_lstclear(&lst, free);
			ft_error();
		}
		populate_list(&lst, value);
		value = NULL;
		i++;
	}
	return (lst);
}
