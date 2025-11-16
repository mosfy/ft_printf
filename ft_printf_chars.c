/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:12:33 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/16 17:12:42 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_char(va_list *ap)
{
	char	c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
	return (1);
}

size_t	print_unsigned_number(va_list *ap)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	return (ft_putnbr_unsigned_fd(n, 1));
}

size_t	print_str(va_list *ap)
{
	char	*str;

	str = va_arg(*ap, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	return (ft_putstr_fd(str, 1));
}

size_t	print_percent(va_list *ap)
{
	(void)ap;
	write(1, "%", 1);
	return (1);
}
