/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:50:48 by malde-ch          #+#    #+#             */
/*   Updated: 2024/11/02 18:47:17 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    quick_sort(t_list **command, t_list **lst_a, t_list **lst_b)
{
    int pivot;
	int	size;

    if (!*lst_a || ft_lstsize(*lst_a) <= 1)
        return;

    pivot = *(int *)(*lst_a)->content;

	size = ft_lstsize(*lst_a);
    while (size)
    {
        if (*(int *)(*lst_a)->content < pivot)
        {
            add_i(command, pb(lst_a, lst_b));
        }
        else
        {
            add_i(command, ra(lst_a));
        }
		size--;
    }

    quick_sort(command, lst_b, lst_a);

    add_i(command, pa(lst_a, lst_b));

    quick_sort(command, lst_a, lst_b);
}
