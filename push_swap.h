/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:37:06 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/19 12:22:21 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

//data
typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	char	name;
	t_node	*head;
	t_node	*tail;
}	t_list;

//function prototypes - nodes
t_node  *create_node(int data);
void    add_node_top(t_list *list, int data);
void    add_node_bottom(t_list *list, int data);

//function prototypes - list
t_list  *create_list(char name);

//del_node_top();

//function prototypes - sort operations
void    swap(t_list *list);

//function prototypes - sorting
//radix();

#endif
