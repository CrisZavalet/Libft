/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:37:23 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/28 13:58:56 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	alm;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	alm = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == alm)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
