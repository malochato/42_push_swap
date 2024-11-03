/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instructions_rr.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:36 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/30 15:26:47 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*before_last;

	if (lst == NULL || *lst == NULL || (*lst)->next == NULL)
		return ;
	last = *lst;
	while (last->next != NULL)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	ft_lstadd_front(lst, last);
	
}

char	*rra(t_list **lst)
{
	reverse_rotate(lst);
	return ("rra\n");
}

char	*rrb(t_list **lst)
{
	reverse_rotate(lst);
	return ("rrb\n");
}


char	*rrr(t_list **lst_a, t_list **lst_b)
{
	reverse_rotate(lst_a);
	reverse_rotate(lst_b);
	return ("rrr\n");
}

