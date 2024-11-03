/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:55:01 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/31 15:01:16 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_i(t_list **lst, char *instruction)
{
	t_list	*new;
	char	*content;

	if (!lst)
		return ;
	content = ft_strdup(instruction);
	new = ft_lstnew(content);
	if (!new || !content)
	{
		free(content);
		ft_lstclear(lst, free);
		ft_error();
	}
	ft_lstadd_back(lst, new);
}

