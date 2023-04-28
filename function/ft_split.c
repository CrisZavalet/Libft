/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:10:32 by czavalet          #+#    #+#             */
/*   Updated: 2023/04/28 12:35:48 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	i_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (str[i] != c && str[i] != '\0')
		words++;
	while (str[i])
	{
		if (str[i + 1] && str[i] == c && (str[i + 1] != c))
			words++;
		i++;
	}
	return (words);
}

static	char	**push_arr(char **arrp, char const *s, int b, char c)
{
	int	i;
	int	j;
	int	len;
	int	start;

	i = 0;
	j = 0;
	while (j < b)
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
		arrp[j] = ft_substr(s, start, len);
		j++;
	}
	arrp[j] = 0;
	return (arrp);
}

char	**ft_split(char const *s, char c)
{
	char	**arrp;
	int		i_word;

	if (!s)
		return (NULL);
	i_word = i_words((char *)s, c);
	arrp = malloc(sizeof(char *) * (i_word + 1));
	if (!arrp)
		return (NULL);
	arrp = push_arr(arrp, s, i_word, c);
	return (arrp);
}
