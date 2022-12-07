/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_broken_calloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:10:14 by tspoof            #+#    #+#             */
/*   Updated: 2022/12/07 21:58:23 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	*ft_broken_calloc(size_t count, size_t size)
{
	void	*ptr;
	void	*ptr2;
	void	*ptr3;
	void	*ptr4;

	if (!count || !size)
		return (ft_broken_calloc(1, 1));
	if ((count * size) / count != size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ptr2 = malloc(count * size);
	if (!ptr2)
		return (NULL);
	ptr3 = malloc(count * size);
	// if (!ptr3)
	// 	return (NULL);
	ptr4 = malloc(count * size);
	if (!ptr4)
		return (NULL);
	ft_bzero(ptr, count * size);
	ft_bzero(ptr2, count * size);
	ft_bzero(ptr3, count * size);
	ft_bzero(ptr4, count * size);
	return (ptr);
}
