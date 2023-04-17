/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:37:06 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/17 14:00:41 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>

//data
typedef struct s_node
{
	int				data;
    int             index;
	struct s_node	*next;
}	t_node;

//function prototypes - nodes
t_node  *list(int data); //inicia um node
void    add_node_bottom(t_node **head, t_node *node); //usar em loop para adicionar e ligar os nodes
//add_node_top();
//del_node_top();

//function prototypes - sorting
//radix();



#endif
