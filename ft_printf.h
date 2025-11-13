#pragma once

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "libft.h"

typedef size_t	(*t_pfn)(va_list *);

size_t	print_char(va_list *ap);
size_t	print_number(va_list *ap);
int		ft_printf(char *fmt, ...);