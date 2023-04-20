/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:59:18 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/09 09:38:30 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	len;

	str = s;
	len = 0;
	if (n > 0)
	{
		while (len < n)
		{
			str[len] = 0;
			len++;
		}
	}
}