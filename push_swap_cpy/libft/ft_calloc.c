/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:37:21 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/05 10:32:34 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (!nmemb && !size)
		return (NULL);
	else if (!nmemb || !size)
		return (malloc(0));
	if (nmemb > MAXSIZE || size > MAXSIZE)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (0);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
