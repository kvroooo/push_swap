/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:40:06 by kuro              #+#    #+#             */
/*   Updated: 2023/05/26 15:57:47 by smlamali         ###   ########.fr       */
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
void	mr_propre(t_pile *pile);
void	add_back(t_data **data, t_data *new);
void	ft_error(char *str);
t_data	*free_data(t_data *data);
t_data	*free_at(t_data *data, int pos);
t_data	*get_pos(t_data *data, int pos);
t_data	*lst_last(t_data *data);
void	set_position(t_data *data);
void	set_index(t_data *data);

// -_-_-_-_-_-  FT_LIST -_-_-_-_-_- 
t_data	*add_at(t_data *data, int nb, int pos);
t_data	*free_last(t_data *data);
void	print_list(t_data *data);
t_data	*create_cell(int nbr);
t_pile	*l_new_pil(void);
t_data	*l_add_data(t_data *data, int nb);

// -_-_-_-_-_-  PARSING -_-_-_-_-_- 
int		ft_check(char **argv, t_pile *pile);
int		ft_parse(char **arg, t_pile *pile);
int		ft_occ(int nb, t_data *data);

// -_-_-_-_-_-  SORT -_-_-_-_-_- 
int		is_sorted(t_data *data);
void	smoll_sort(t_pile *pile);

// -_-_-_-_-_- INSTRUCTIONS  -_-_-_-_-_-
void	ft_sa(t_data *data);
void	ft_rra(t_data **data);

#endif