/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:40:06 by kuro              #+#    #+#             */
/*   Updated: 2023/05/09 16:27:21 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "printf.h"
# include "libft/libft.h"

typedef struct s_data
{
	int				nbr;
	int				pos;
	int				index;

	struct s_data	*next;
	struct s_data	*prev;
}	t_data;

typedef struct s_pile
{
	int		len;
	int		len_a;
	int		len_b;

	t_data	*a;
	t_data	*b;
}	t_pile;

// ------ UTILS ------
void	ft_error(char *str);
t_data	*free_data(t_data *data);

// ------ STRUCT ------
//t_data	*l_new_data(void);
t_pile	*l_new_pil(void);
t_data	*l_add_data(t_data *data, int nb);

// ------- FT_LIST ------
t_data	*add_at(t_data *data, int nb, int pos);
void	print_list(t_data *data);
t_data	*create_cell(int nbr);

// ------ PARSING ------
int		ft_check(char **argv, t_pile *pile);
void	ft_parse(char **arg, t_pile *pile);

#endif