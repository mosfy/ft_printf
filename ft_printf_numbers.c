/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:51:57 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/16 17:12:53 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	char	*res;
	int		count;

	count = 0;
	res = ft_itoa(n);
	if (res)
		count = ft_putstr_fd(res, fd);
	free(res);
	return (count);
}

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned_fd(n / 10, fd);
	c = '0' + (n % 10);
	count += write(fd, &c, 1);
	return (count);
}

size_t	ft_putnbr_hex_fd(unsigned int n, int fd, char *hex)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex_fd(n / 16, fd, hex);
	count += ft_putchar_fd(hex[n % 16], fd);
	return (count);
}

int	ft_putptr_hex_fd(unsigned long long n, int fd)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putptr_hex_fd(n / 16, fd);
	count += write(fd, &hex[n % 16], 1);
	return (count);
}

size_t	print_number(va_list *ap)
{
	int	n;

	n = va_arg(*ap, int);
	return (ft_putnbr_fd(n, 1));
}
