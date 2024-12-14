/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:01:34 by afaugero          #+#    #+#             */
/*   Updated: 2024/12/14 19:05:50 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digits(unsigned int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		digits++;
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

static void	write_tab(char *res, unsigned int n, int digits)
{
	long	nb;

	res[digits] = '\0';
	nb = n;
	while (nb > 0)
	{
		res[digits -1] = nb % 10 + '0';
		nb /= 10;
		digits--;
	}
}

char	*ft_uitoa(unsigned int n)
{
	int		digits;
	char	*res;

	digits = get_digits(n);
	res = (char *)malloc(sizeof(char) * (digits + 1));
	if (!res)
		return (NULL);
	if (n == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	write_tab(res, n, digits);
	return (res);
}
