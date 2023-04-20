/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:01:55 by czavalet          #+#    #+#             */
/*   Updated: 2023/04/02 13:58:03 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	s_len;
	size_t			i;

	s_len = (unsigned int)ft_strlen((char *)s);
	if (!s)
		return (NULL);
	i = 0;
	if (start >= s_len)
		len = 0;
	if (s_len <= len)
		len = s_len;
	dst = malloc(sizeof(*s) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while (i < len && start <= s_len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* 

   if (s == NULL)
        return NULL;
    
    size_t s_len = 0;
    const char *p = s;
    while (*p++ != '\0') s_len++;

    if (start >= s_len)
        return NULL;
    
    const char *sub_s = s + start;
    size_t sub_len = len;
    if (sub_len > s_len - start)
        sub_len = s_len - start;
    
    char *ret = (char *) malloc(sub_len + 1);
    if (ret == NULL)
        return NULL;
    
    for (size_t i = 0; i < sub_len; i++)
        ret[i] = sub_s[i];
    ret[sub_len] = '\0';
    
    return ret;

------------------------------------------------
	
*/