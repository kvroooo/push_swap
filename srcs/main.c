/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:15:39 by kuro              #+#    #+#             */
/*   Updated: 2023/05/29 15:03:07 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TO DO : fonction qui set index et position => OK !!!!! :D
// TO DO : faire commencer position a 1; plutot que 0 :S
int	main(int argc, char *argv[])
{
	t_pile	*pile;

	if (argc < 2)
		return (ft_error("no list"), 0);
	pile = l_new_pil();
	ft_printf("------ MAIN ------\n");
	if (!ft_check(argv, pile))
		return (ft_error("bad list :c"), free(pile), 0);
	if (!ft_parse(argv, pile))
	{
		mr_propre(pile);
		return (0);
	}
	ft_printf("pile A : ");
	print_list(pile->a);
	if (argc <= 4)
		smoll_sort(pile);
	if (argc >= 4 && argc <= 6)
		sort_five(pile);
	ft_printf("pile A : ");
	print_list(pile->a);
	ft_printf("------ END ------\n");
	mr_propre(pile);
}
