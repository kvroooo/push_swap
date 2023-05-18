/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:15:39 by kuro              #+#    #+#             */
/*   Updated: 2023/05/18 17:59:20 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TO DO : REMPLACER LES PRINTF PAR FT_PRINTF !!!
// TO DO : fonction qui set index des nombres 
// 			et leur position dans le tableau a chaque mvmt !
// TO DO : pour rra essayer de faire un setAt
//			pour ajouter un element de structure en entier, plutot que nb

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
	if (argc <= 4)
		smoll_sort(pile);
	print_list(pile->a);
	ft_printf("------ END ------\n");
	free_data(pile->a);
	free(pile);
}
