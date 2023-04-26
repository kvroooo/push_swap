/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:57:29 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/02 11:51:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!*lst || !lst || !del)
		return ;
	del((*lst)->content);
	ft_lstclear(&(*lst)->next, del);
	free(*lst);
	*lst = NULL;
}
