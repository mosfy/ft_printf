/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:13:09 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/16 17:13:10 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_pointer(va_list *ap)
{
	unsigned long long	ptr;
	size_t				count;

	ptr = (unsigned long long)va_arg(*ap, void *);
	count = 0;
	if (ptr == 0)
		return (ft_putstr_fd("(nil)", 1));
	count += ft_putstr_fd("0x", 1);
	count += ft_putptr_hex_fd(ptr, 1);
	return (count);
}
