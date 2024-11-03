/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:00:50 by malde-ch          #+#    #+#             */
/*   Updated: 2024/10/31 18:51:26 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

t_list	*ft_create_list(int argc, char **argv);

int		ft_error(void);
int		cmp_int(void *a, void *b);
void    print_instruction(t_list *lst);
int 	find_position_min(t_list *lst);
int 	find_position_max(t_list *lst);

void    add_i(t_list **lst, char *instruction);



char	*sa(t_list **lst);
char	*sb(t_list **lst);
char	*ss(t_list **lst_a, t_list **lst_b);

char	*pa(t_list **lst_a, t_list **lst_b);
char	*pb(t_list **lst_a, t_list **lst_b);

char	*ra(t_list **lst);
char	*rb(t_list **lst);
char	*rr(t_list **lst_a, t_list **lst_b);

char	*rra(t_list **lst);
char	*rrb(t_list **lst);
char	*rrr(t_list **lst_a, t_list **lst_b);


void    selection_sort(t_list **command, t_list **lst_a, t_list **lst_b);
void    quick_sort(t_list **command, t_list **lst_a, t_list **lst_b);

#endif
