/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:01:46 by czavalet          #+#    #+#             */
/*   Updated: 2023/04/02 15:36:35 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	cont;
	int		alm;

	alm = -1;
	cont = 0;
	len = ft_strlen(s);
	while (cont <= len)
	{
		if (s[cont] == (char) c)
			alm = cont;
		cont++;
	}
	if (alm != -1)
		return ((char *)&s[alm]);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
