/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:42:57 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/29 03:53:25 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int		i;
	char	*s;

	s = (char *) string;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)searchedChar)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == (char)searchedChar)
		return (&s[i]);
	return (NULL);
}
