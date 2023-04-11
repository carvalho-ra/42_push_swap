/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:37:06 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/11 11:45:22 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

//data
typedef struct s_node
{
	int				data;
    int             index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
	char	stack_name;
}	t_stack;

//function prototypes - nodes
add_node_top();
add_node_bottom();
del_node_top();

//function prototypes - sorting
radix();



#endif
