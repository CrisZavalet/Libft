/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:41:04 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/15 15:46:55 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	unsigned char		*buff;

	if (!dest && !src)
		return (NULL);
	dest1 = (unsigned char *)dest;
	buff = (unsigned char *)src;
	if (buff <= dest1)
	{
		while (n--)
		{
			dest1[n] = buff[n];
		}
	}
	else
		ft_memcpy(dest1, buff, n);
	return (dest);
}
