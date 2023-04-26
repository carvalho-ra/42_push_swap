/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:47:13 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/26 13:49:19 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
#include <stdio.h>

//data
typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}					t_node;

typedef struct s_list
{
	char			name;
	unsigned int	size;
	t_node			*head;
	t_node			*tail;
}					t_list;

//function prototypes - nodes
t_node	*create_node(int data);
void	add_node_top(t_list *list, int data);
void	add_node_bottom(t_list *list, int data);
void	del_node_top(t_list *list);

//function prototypes - list
t_list	*create_list(char name);
void	print_list(t_list *list);
int		is_sorted(t_list *list);
int		find_min_data(t_list *list);
void	del_list(t_list *list);

//funtion prototypes validation
int		check_empty(int argc, char **argv);
int		check_char(int argc, char **argv);
int		check_max_min_int(int argc, char **argv);
int		check_dup(int argc, char **argv);
int		validation(int argc, char **argv);

//function prototypes - sort operations
void	swap(t_list *list);
void	rotate(t_list *list);
void	rev_rotate(t_list *list);
void	push(t_list *push, t_list *receive);
void	swap_both(t_list *list_a, t_list *list_b);
void	rotate_both(t_list *list_a, t_list *list_b);
void	rev_rotate_both(t_list *list_a, t_list *list_b);

//function prototypes - sorting
int		sort_3(t_list *list_a);
int		sort_4(t_list *list_a, t_list *list_b);
int		sort_5(t_list *list_a, t_list *list_b);

t_list	*cp_list(t_list *list);
t_list	*index_list(t_list *bubble, t_list *list_a);
t_list	*bubble_sort(t_list *list_a);

void	radix(t_list *list_a, t_list *list_b);

#endif
