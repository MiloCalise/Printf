/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:49:23 by milo              #+#    #+#             */
/*   Updated: 2025/05/14 13:41:54 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		check_format(const char *format);
int		check_char(char c);
int		size_calc(long n);
int		distrib(char type, va_list params);
int		print_str(const char *format, va_list params);
int		type_c(va_list params);
int		type_di(va_list params);
int		type_s(va_list params);
int		type_u(va_list params);
int		type_p(va_list params);
int		ft_putnbr_hex_adr(unsigned long nbr);
int		ft_putnbr_hex_low(unsigned int nbr);
int		ft_putnbr_hex_up(unsigned int nbr);
int		type_x(va_list params);
int		type_xx(va_list params);
int		type_percent(void);

void	fill_hex(char *dest, char *str);
void	ft_put_unsigned_nbr(unsigned int nbr);

#endif
