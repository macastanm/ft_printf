/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:44:33 by macastan          #+#    #+#             */
/*   Updated: 2022/12/13 13:44:48 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>

char	*ft_strchr(const char *str, int c);
void	ft_printpointer(uintptr_t nb);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_print_arg(const char *str, int i, va_list ap);
int		ft_putnbr(int nb);
int		ft_putnbr_u(unsigned int nb);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int nb, const char type);
int		ft_hexcount(unsigned int nb);
int		ft_putpoint(unsigned long long pointer);
int		ft_pointerlen(uintptr_t nb);

#endif
