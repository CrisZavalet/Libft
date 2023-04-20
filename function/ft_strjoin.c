/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:53:56 by czavalet          #+#    #+#             */
/*   Updated: 2023/04/02 15:14:11 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	char	*join;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(*s1) \
	* (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		join[j + i] = s2[j];
		j++;
	}
	join[j + i] = '\0';
	return (join);
}
