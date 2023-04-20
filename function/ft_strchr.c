/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:10:00 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/19 11:08:53 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	cont;

	cont = 0;
	len = ft_strlen(s);
	while (cont <= len)
	{
		if (s[cont] == (char) c)
			return ((char *)&s[cont]);
		cont++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
