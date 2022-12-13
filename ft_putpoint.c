/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:18:43 by macastan          #+#    #+#             */
/*   Updated: 2022/12/13 12:17:31 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointerlen(uintptr_t nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

void	ft_printpointer(uintptr_t nb)
{
	if (nb >= 16)
	{
		ft_printpointer(nb / 16);
		ft_printpointer(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}

int	ft_putpoint(unsigned long long pointer)
{
	int	len;

	len = 0;
	if (!pointer)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		ft_putstr("0x");
		len += 2;
		ft_printpointer(pointer);
		len += ft_pointerlen(pointer);
	}
	return (len);
}
