/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:00:48 by bda-silv          #+#    #+#             */
/*   Updated: 2023/03/18 23:16:04 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "../lib/libft/inc/libft.h"

# define SUCCESS	(1)
# define FAILURE	(0)

# ifndef INT_MAX
#  define INT_MAX	(2147483647)
# endif

# ifndef INT_MIN
#  define INT_MIN	(-2147483648)
# endif

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack{
	struct s_node	*head;
	struct s_node	*tail;
	int				size;
	char			name;
}	t_stack;

/* SORT */
int		sort(t_stack *a, t_stack *b);
int		sort_3(t_stack *stack);
int		sort_4(t_stack *a, t_stack *b);
int		sort_5(t_stack *a, t_stack *b);
int		radix(t_stack *a, t_stack *b);

/* PIVOT */
int		rotate_direction(t_stack *stack);
int		rotate_min_to_top(t_stack *a);

/* QUEST */
int		find_id(int index, t_stack *stack);
int		min_id(t_stack *stack);
int		mid_id(t_stack *stack);
int		max_id(t_stack *stack);

/* MOVES */
int		s(t_stack *stack);
int		r(t_stack *stack);
int		rr(t_stack *stack);
int		p(t_stack *send, t_stack *recv);

/* INDEX */
void	init_index(t_stack *stack);
void	sort_index(t_stack *stack);
int		is_sorted(t_stack *stack);
t_node	*least_value(t_stack *stack);

/* STACK */
void	init_stack(t_stack *stack, char c);
void	show_stack(t_stack *stack);
void	kill_stack(t_stack *stack);
int		mount_stack(t_stack *a, char **params);
int		collapse_stacks(t_stack *a, t_stack *b);

/* NODES */
int		add_node_on_top(t_stack *stack, int value, int index);
int		add_node_on_bottom(t_stack *stack, int value);
int		del_node_on_top(t_stack *stack);

/* VALIDATION */
int		empty_check(char **params, int i, int j);
int		alpha_check(char **params, int i, int j);
int		digit_check(char **params, int i, int j);
int		equal_check(char **params, int i, int j);

/* PARSE */
char	*serialize(char **argv);
int		validate(char **params, int i, int j);
int		validation(char **params);
int		array_size(char **pp);

/* UTILS */
char	*ft_strjoinfree(char *s1, char *s2);
char	**free1d(char *p);
char	**free2d(char **pp);
int		ft_wordcount(char const *s, char c);
int		ft_atol(const char *str);

#endif
