/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instructions_r.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:36 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/30 15:45:47 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **lst)
{
	t_list	*first;

	if (lst == NULL || *lst == NULL || (*lst)->next == NULL)
		return ;
	first = *lst;
	*lst = (*lst)->next;
	first->next = NULL;
	ft_lstadd_back(lst, first);
	
}

char	*ra(t_list **lst)
{
	rotate(lst);
	return ("ra\n");
}

char	*rb(t_list **lst)
{
	rotate(lst);
	return ("rb\n");
}

char	*rr(t_list **lst_a, t_list **lst_b)
{
	rotate(lst_a);
	rotate(lst_b);
	return ("rr\n");
}
