/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:13:15 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/31 16:58:11 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_list **command, t_list **lst_a, t_list **lst_b)
{
	int	min_index;

	(void)command;
	min_index = find_position_min(*lst_a);
	
	while(*lst_a)
	{
		min_index = find_position_min(*lst_a);
		if (min_index <= ft_lstsize(*lst_a))
		{
			while(min_index--)
				add_i(command, ra(lst_a));
		}
		else
		{
			while(min_index--)
				add_i(command, rra(lst_a));
		}
		add_i(command, pb(lst_a, lst_b));
	}
	while(*lst_b)
		add_i(command, pa(lst_a, lst_b));
}
