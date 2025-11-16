/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:05:15 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/16 17:30:02 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "libft.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef size_t	(*t_pfn)(va_list *);

size_t			print_char(va_list *ap);
size_t			print_number(va_list *ap);
size_t			print_unsigned_number(va_list *ap);
size_t			print_str(va_list *ap);
size_t			print_percent(va_list *ap);

size_t			print_hexa_numberx(va_list *ap);
size_t			print_hexa_number_x(va_list *ap);
size_t			print_pointer(va_list *ap);

size_t			ft_putnbr_fd(int n, int fd);
int				ft_putnbr_unsigned_fd(unsigned int n, int fd);
size_t			ft_putnbr_hex_fd(unsigned int n, int fd, char *hex);
int				ft_putptr_hex_fd(unsigned long long n, int fd);

int				ft_printf(const char *fmt, ...);
