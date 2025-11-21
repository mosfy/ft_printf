/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 01:48:57 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/16 17:29:34 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	handle_format(char spec, va_list *ap)
{
	static t_pfn	ga[256] = {['c'] = print_char, ['d'] = print_number,
	['i'] = print_number, ['u'] = print_unsigned_number,
	['s'] = print_str, ['%'] = print_percent,
	['x'] = print_hexa_numberx, ['X'] = print_hexa_number_x,
	['p'] = print_pointer};

	if (ga[(int)spec])
		return (ga[(int)spec](ap));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		lenght;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	lenght = ft_strlen(fmt);
	va_start(ap, fmt);
	while (i < lenght)
	{
		if (fmt[i] == '%')
		{
			count += handle_format(fmt[i + 1], &ap);
			i = i + 2;
		}
		else
		{
			ft_putchar_fd(fmt[i], 1);
			i++;
			count++;
		}
	}
	return (count);
}

int main(void) 
{
	char* test = "test"; 
	ft_printf("%d ",ft_printf("hello %c world %d and %s %% and for sure %u and don't forget %x %X %p:", 'b', 10, "cool", 2,200,200, test)); 
	printf("\n"); 
	printf("%d ",printf("hello %c world %d and %s %% and for sure %u and don't forget %x %X %p:", 'b', 10, "cool", 2,200,200, test));
	return (0);
} 