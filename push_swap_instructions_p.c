/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instructions_p.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:36 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/30 17:01:15 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **lst_1, t_list **lst_2)
{
	t_list	*temp;

	if (lst_1 == NULL || *lst_1 == NULL)
		return ;
	temp = *lst_1;
	*lst_1 = (*lst_1)->next;
	ft_lstadd_front(lst_2, temp);
}

char	*pa(t_list **lst_a, t_list **lst_b)
{
	push(lst_b, lst_a);
	return ("pa\n");
}

char	*pb(t_list **lst_a, t_list **lst_b)
{
	push(lst_a, lst_b);
	return ("pb\n");
}
