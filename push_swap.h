/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:40:06 by kuro              #+#    #+#             */
/*   Updated: 2023/05/23 17:45:32 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_data
{
	int				nbr;
	int				pos;
	int				index;

	struct s_data	*next;
}	t_data;

typedef struct s_pile
{
	int		len;
	int		len_a;
	int		len_b;

	t_data	*a;
	t_data	*b;
}	t_pile;

// -_-_-_-_-_- UTILS -_-_-_-_-_- 
void	ft_error(char *str);
t_data	*free_data(t_data *data);
t_data	*free_at(t_data *data, int pos);
t_data	*get_pos(t_data *data, int pos);
int		get_val_at(t_data *data, int pos);

// -_-_-_-_-_-  FT_LIST -_-_-_-_-_- 
t_data	*add_at(t_data *data, int nb, int pos);
void	add_front(t_data **lst, t_data *new);
t_pile	*free_last(t_pile *pile);
void	print_list(t_data *data);
t_data	*create_cell(int nbr);
t_pile	*l_new_pil(void);
t_data	*l_add_data(t_data *data, int nb);

// -_-_-_-_-_-  PARSING -_-_-_-_-_- 
int		ft_check(char **argv, t_pile *pile);
void	ft_parse(char **arg, t_pile *pile);
int		ft_occ(int nb, t_data *data);

// -_-_-_-_-_-  SORT -_-_-_-_-_- 
int		is_sorted(t_data *data);
void	smoll_sort(t_pile *pile);

// -_-_-_-_-_- INSTRUCTIONS  -_-_-_-_-_-
void	ft_sa(t_data *data);
void	ft_rra(t_pile *pile);

#endif