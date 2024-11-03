/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:01:58 by malde-ch          #+#    #+#             */
/*   Updated: 2024/11/02 17:08:23 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	afficherListe(t_list *head) {
    t_list *current = head;
    while (current != NULL)
	{
        ft_printf("%d -> ", *(int *)current->content);
        current = current->next;
    }
    ft_printf("NULL\n");
}

int main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	t_list	*command;

	command = NULL;
	if (argc >= 2)
	{
		if (argc == 2)
		{
			argv = ft_split(argv[1], ' ');
			argc = 0;
			while (argv[argc] != NULL)
				argc++;
			lst_a = ft_create_list(argc, argv);
		}
		else
			lst_a = ft_create_list(argc -1, argv + 1);
		lst_b = ft_create_list(0, 0);

		//selection_sort(&command, &lst_a, &lst_b);
		quick_sort(&command, &lst_a, &lst_b);	
	
		print_instruction(command);

		ft_lstclear(&command, free);
		ft_lstclear(&lst_a, free);
		ft_lstclear(&lst_b, free);	
	}
	return (0);
}
