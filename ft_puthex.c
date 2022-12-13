/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:42:02 by macastan          #+#    #+#             */
/*   Updated: 2022/12/13 11:47:46 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexcount(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

int	ft_puthex(unsigned int nb, const char type)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb >= 16)
	{
		ft_puthex(nb / 16, type);
		ft_puthex(nb % 16, type);
	}
	else
	{
		if (nb <= 9)
			ft_putchar((nb + '0'));
		else
		{
			if (type == 'X')
				ft_putchar((nb - 10 + 'A'));
			else if (type == 'x')
				ft_putchar((nb - 10 + 'a'));
		}
	}
	return (ft_hexcount(nb));
}
