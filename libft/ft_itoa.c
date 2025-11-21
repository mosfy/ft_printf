/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:19:37 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/28 02:15:40 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sizeofint(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	ntmp;

	ntmp = n;
	len = ft_sizeofint(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	if (ntmp < 0)
	{
		res[0] = '-';
		ntmp = -ntmp;
	}
	res[len] = '\0';
	len--;
	while (len >= 0 && res[len] != '-')
	{
		res[len] = (ntmp % 10) + '0';
		ntmp = ntmp / 10;
		len--;
	}
	return (res);
}
