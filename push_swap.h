/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:39:04 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/04 18:38:17 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "printf/ft_printf.h"
# include "libft/libft.h"

// typedef struct s_pile
// {
// 	int		nb;
// 	int		index;
// 	s_pile	*next;	
// }	t_pile;

typedef struct s_data
{
	int	*a;
	int	*b;
	int	index;
	int	len;
	int	len_a;
	int	len_b;
}	t_data;

//UTILS
void	ft_error(char *str);

//PARSING
void	ft_parse(char **arg, t_data *data);
int		ft_check(char **arg, t_data *data);
int		ft_occurence(t_data *data);

//ALGO TRI
void    tri_three(t_data *data);

//INSTRUCTIONS
void	ft_sa(t_data *data);
void	ft_ra(t_data *data);
void	ft_rra(t_data *data);

#endif