/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 01:40:49 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/29 03:59:44 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;

	if (start >= ft_strlen(s))
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (ft_strlen(s + start) > len)
		size = len;
	else
		size = ft_strlen(s + start);
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, size);
	res[size] = '\0';
	return (res);
}
