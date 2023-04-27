/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:10:32 by czavalet          #+#    #+#             */
/*   Updated: 2023/04/27 17:39:39 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_c(char *str, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	if (str[i] != c && str[i] != '\0')
		wc++;
	while (str[i])
	{
		if (str[i + 1] && str[i] == c && (str[i + 1] != c))
			wc++;
		i++;
	}
	return (wc);
}

static char	**cpy(char **mots, char const *s, int wc, char c)
{
	int	i;
	int	j;
	int	len;
	int	start;

	i = 0;
	j = 0;
	while (j < wc)
	{
		len = 0;
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
		{
			len++;
			i++;
		}
		mots[j] = ft_substr(s, start, len);
		j++;
	}
	mots[j] = 0;
	return (mots);
}

char	**ft_split(char const *s, char c)
{
	char	**mots;
	int		wc;

	if (!s)
		return (NULL);
	wc = word_c((char *)s, c);
	mots = malloc(sizeof(char *) * (wc + 1));
	if (!mots)
		return (0);
	mots = cpy(mots, s, wc, c);
	return (mots);
}


