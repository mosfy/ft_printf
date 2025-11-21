/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:58:23 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/27 17:33:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int		i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (char)searchedChar)
		{
			return ((char *)&string[i]);
		}
		i--;
	}
	return (NULL);
}
