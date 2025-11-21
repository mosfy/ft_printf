/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:32:43 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/29 18:32:43 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if (!dst || !src)
		return (0);
	dlen = 0;
	slen = 0;
	i = 0;
	while (dlen < size && dst[dlen] != '\0')
		dlen++;
	slen = ft_strlen(src);
	if (dlen == size)
		return (dlen + slen);
	while (src[i] && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
