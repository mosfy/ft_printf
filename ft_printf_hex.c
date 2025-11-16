/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:12:47 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/16 17:16:29 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_hexa_numberx(va_list *ap)
{
	unsigned int	c;

	c = va_arg(*ap, unsigned int);
	return (ft_putnbr_hex_fd(c, 1, "0123456789abcdef"));
}

size_t	print_hexa_number_x(va_list *ap)
{
	unsigned int	c;

	c = va_arg(*ap, unsigned int);
	return (ft_putnbr_hex_fd(c, 1, "0123456789ABCDEF"));
}
