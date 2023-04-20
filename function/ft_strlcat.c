/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:48:33 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/19 11:09:59 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	cont;
	unsigned int	len;
	unsigned int	len1;
	unsigned int	alm;

	cont = 0;
	len = (unsigned int) ft_strlen(dst);
	len1 = (unsigned int) ft_strlen(src);
	alm = len;
	if (dstsize < (len + 1))
		return (dstsize + len1);
	else
	{
		while (src[cont] && cont < dstsize - alm - 1)
		{
			dst[len] = src[cont];
			len++;
			cont++;
		}
		dst[len] = '\0';
		return (alm + len1);
	}
}
