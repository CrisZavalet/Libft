/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:20:17 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/09 11:58:00 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*d;
	size_t			a;

	d = str;
	a = 0;
	while (a < n)
	{
		d[a] = (unsigned char) c;
		a++;
	}
	return (d);
}
