/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:00:00 by yourlogin         #+#    #+#             */
/*   Updated: 2025/11/13 19:04:38 by tfrances         ###   ########.fr       */
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

size_t	print_number(va_list *ap)
{
	int	n;

	n = va_arg(*ap, int);
	write(1, "oh tu membetes avec tes ints toi\n", 33);
	return (33);
}

int	ft_printf(char *fmt, ...)
{
	static t_pfn	g_a[] = {
		['c'] = print_char,
		['d'] = print_number,
	};

	int i;
	int	lenght;
	int count;
	va_list	ap;

	i = 0;
	count = 0;
	lenght = ft_strlen(fmt);
	va_start(ap,fmt);
	while (i < lenght)
	{
		if (fmt[i] == '%')
		{
			g_a[(int)fmt[i + 1]](&ap);
		}
		ft_putchar_fd(fmt[i],1);
		i++;
	}
	return (0);

	// va_start(v, fmt);
	// format = 'c';
	// if (!strchr("csdx", format))
	// 	return (-1);
	// g_a[(int)format](&v);
	// size = strchr(fmt, '%') - fmt;
	// write(1, fmt, size);
	// fmt += size + 2;
	// va_end(v);
	// return (0);
}

int	main(void)
{
	ft_printf("hello %c world %d", 'b', 10);
	return (0);
}
