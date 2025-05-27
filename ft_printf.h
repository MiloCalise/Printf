/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:49:23 by milo              #+#    #+#             */
/*   Updated: 2025/05/23 11:25:52 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_put_unsigned_nbr(unsigned int nbr);
void	fill_hex(char *dest, char *str);

int		ft_putnbr_hex_low(unsigned int nbr);
int		ft_putnbr_hex_up(unsigned int nbr);
int		ft_printf(const char *format, ...);
int		type_c(va_list params);
int		type_di(va_list params);
int		type_s(va_list params);
int		type_u(va_list params);
int		type_p(va_list params);
int		type_x(va_list params);
int		type_xx(va_list params);
int		type_percent(void);
int		size_calc(long n);
int		ft_putnbr_hex_adr(unsigned long nbr);
int		distrib(char type, va_list params);

size_t	ft_strlen(const char *str);

#endif
