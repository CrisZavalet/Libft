/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:13:14 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/15 15:45:25 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while ((src[len] != 0) && (len < dstsize - 1) && (dstsize != 0))
	{
		dst[len] = src[len];
		len++;
	}
	if (dstsize != 0)
		dst[len] = '\0';
	return (ft_strlen(src));
}
