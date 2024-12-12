/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:35:54 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 10:58:15 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(int nbr, char const *base, int fd)
{
	int const	base_len = ft_strlen(base);
	long		n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > base_len - 1)
		ft_putnbr_base_fd(n / base_len, base, fd);
	ft_putchar_fd(base[n % base_len], fd);
}

void	ft_putnbr_long_base_fd(long nbr, char const *base, int fd)
{
	int const	base_len = ft_strlen(base);
	long long	n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > base_len - 1)
		ft_putnbr_long_base_fd(n / base_len, base, fd);
	ft_putchar_fd(base[n % base_len], fd);
}

void	ft_putnbr_ulong_base_fd(unsigned long nbr, char const *base, int fd)
{
	size_t const	base_len = ft_strlen(base);

	if (nbr > base_len - 1)
		ft_putnbr_ulong_base_fd(nbr / base_len, base, fd);
	ft_putchar_fd(base[nbr % base_len], fd);
}
