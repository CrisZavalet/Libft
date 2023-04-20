/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:54:56 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/28 13:52:01 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			len;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	len = 0;
	if (n == 0)
		return (0);
	while ((str1[len] != '\0' && str2[len] != '\0') \
		&& ((len < n - 1) && (str1[len] == str2[len])))
	{
		len++;
	}
	if (s1[len] == '\200' && s2[len] == '\0')
		return (1);
	return (str1[len] - str2[len]);
}
