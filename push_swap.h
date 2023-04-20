/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:37:06 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/20 09:03:22 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

//data
typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	char	name;
	unsigned int	size;
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

//funtion prototypes validation
int check_empty(int argc, char **argv);
int check_char(int argc, char **argv);
int check_max_min_int(int argc, char **argv);
int check_dup(int argc, char **argv);
int validation(int argc, char **argv);

//function prototypes - sort operations
void    swap(t_list *list);
void    rotate(t_list *list);
void    rev_rotate(t_list *list);
void    push(t_list *receive, t_list *push);

//function prototypes - sorting
//radix();

#endif
