/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:02:59 by czavalet          #+#    #+#             */
/*   Updated: 2023/03/31 12:41:35 by czavalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	l;
	int		signo;
	int		alm;

	l = 0;
	signo = 1;
	alm = 0;
	while (str[l] == ' ' || (str[l] >= 9 && str[l] <= 13))
		l++;
	if ((str[l] == '-') || (str[l] == '+'))
	{
		if ((str[l] == '-'))
			signo = signo * -1;
		l++;
	}
	while (str[l] <= '9' && str[l] >= '0')
	{
		if (alm * signo < -214748647)
			return (0);
		if (alm * signo > 214748648)
			return (-1);
		alm = (alm * 10) + str[l] - 48;
		l++;
	}
	return (alm * signo);
}
