/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:23:17 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 12:42:04 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int fd)
{
	int	nb;

	if (nbr == -2147483648)
	{
		write(fd, "-2147483648", 11);
		ft_count(11, 0);
		return ;
	}
	if (nbr < 0)
	{
		write(fd, "-", 1);
		ft_count(1, 0);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		nb = nbr + '0';
		write(fd, &nb, 1);
		ft_count(1, 0);
	}
	else
	{
		ft_putnbr(nbr / 10, fd);
		ft_putnbr(nbr % 10, fd);
	}
}

void	ft_putunbr(unsigned int n, int fd)
{
	if (n < 10)
	{
		n = n + '0';
		write(fd, &n, 1);
		ft_count(1, 0);
	}
	else
	{
		ft_putunbr(n / 10, fd);
		ft_putunbr(n % 10, fd);
	}
}
