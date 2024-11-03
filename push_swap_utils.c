/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:58:46 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/31 14:59:37 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cmp_int(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

int	ft_error(void)
{
	ft_putstr_fd("ERROR\n", 2);
	exit (1);
}

void	print_instruction(t_list *lst)
{
    t_list *current;
	 
	current = lst;
    while (current != NULL)
	{
        ft_printf("%s", (char *)current->content);
        current = current->next;
    }
}

int find_position_min(t_list *lst)
{
	int	i; 
	int	min;
	int	pos;

	i = 0;
	pos = 0;
	min = *(int *)lst->content;
	while(lst)
	{
		if (min > *(int *)lst->content)
		{
			min = *(int *)lst->content;
			pos = i;
		}
		lst = lst->next;
		i++;
	}
	return (pos);
}

int find_position_max(t_list *lst)
{
	int	i; 
	int	max;
	int	pos;

	i = 0;
	pos = 0;
	max = *(int *)lst->content;
	while(lst)
	{
		if (max < *(int *)lst->content)
		{
			max = *(int *)lst->content;
			pos = i;
		}
		lst = lst->next;
		i++;
	}
	return (pos);
}



