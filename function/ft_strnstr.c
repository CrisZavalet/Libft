/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:24:32 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/28 16:41:42 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	alm;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (i < len && haystack[i])
	{
		alm = 0;
		while ((haystack[i + alm] == needle[alm]) && (i + alm < len))
		{
			if (needle[alm + 1] == '\0')
				return ((char *)&haystack[i]);
			alm++;
		}
		i++;
	}
	return (0);
}
