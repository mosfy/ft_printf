/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:39:40 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/13 18:16:11 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

int ft_printf(const char *format, ...)
{
	int i;
	int	lenght;
	int count;
	va_list	ap;

	i = 0;
	count = 0;
	lenght = ft_strlen(format);
	va_start(ap,format);
	while (i < lenght)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				count += ft_putchar_fd(va_arg(ap, int),1);
				i = i + 2;
			case 's':
			default:
				break;
			}
		}
		ft_putchar_fd(format[i],1);
		i++;
	}
	return (0);
}

int main(int argc, char* argv[])
{
	ft_printf("bonjour %c toi %c",'g','q');
    return 0;
}

// typedef size_t (*pfn)(va_list *);

// size_t print_char(va_list *ap)
// {
//         char c = va_arg(*ap, int);
//         ft_putchar(c);
//         return 1;
// }

// size_t print_number(va_list *ap)
// {
//         int n = va_arg(*ap, int);
//         ft_putnbr(n);
//         return ft_nbrlen(n);
// }


// pfn a[] = {
//         ['c']: print_char,
//         ['d']: print_number,
// };

// a[format[i+1]](&ap);

