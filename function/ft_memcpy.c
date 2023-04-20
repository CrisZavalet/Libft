/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:02:40 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/10 18:53:53 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		len;
	char		*str;
	const char	*str2;

	if (!dest && !src)
		return (NULL);
	str = dest;
	str2 = src;
	len = 0;
	while (len < n && (str[len] || str2[len]))
	{
		str[len] = str2[len];
		len++;
	}
	return (str);
}
