/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:15:39 by kuro              #+#    #+#             */
/*   Updated: 2023/05/17 17:37:49 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TO DO : REMPLACER LES PRINTF PAR FT_PRINTF !!!
int	main(int argc, char *argv[])
{
	t_pile	*pile;

	if (argc < 2)
		return (ft_error("no list"), 0);
	pile = l_new_pil();
	ft_printf("------ MAIN ------\n");
	if (!ft_check(argv, pile))
		return (ft_error("bad list :c"), free(pile), 0);
	ft_parse(argv, pile);
	if (!pile->a)
		return (ft_error("pile null"), 0);
	ft_printf("len: %d\n", pile->len);
	print_list(pile->a);
	ft_rra(pile);
	print_list(pile->a);
	ft_printf("------ END ------\n");
	free_data(pile->a);
	free(pile);
}
