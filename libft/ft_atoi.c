/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:52:47 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/23 15:55:13 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *nptr)
{
	int		i;
	int		sign;
	long	nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (*(nptr + i) == ' ' || *(nptr + i) == '\f' || *(nptr + i) == '\n'
		|| *(nptr + i) == '\r' || *(nptr + i) == '\t' || *(nptr + i) == '\v')
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(*(nptr + i)) && *(nptr + i))
	{
		nb = (nb * 10) + *(nptr + i) - '0';
		i++;
	}
	return (sign * nb);
}

static int	ft_base_error(char const *base)
{
	int				i;
	int				j;
	size_t const	base_len = ft_strlen(base);

	if (base_len == 0 || base_len == 1)
		return (1);
	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-' || *(base + i) == ' '
			|| *(base + i) == '\f' || *(base + i) == '\n' || *(base + i) == '\r'
			|| *(base + i) == '\t' || *(base + i) == '\v')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_is_in_base(char c, char const *base)
{
	int	i;

	i = 0;
	while (c != *(base + i) && *(base + i))
		i++;
	if (*(base + i) == '\0')
		return (0);
	return (1);
}

static int	ft_get_digit(char c, char const *base)
{
	int	i;

	i = 0;
	while (*(base + i) && *(base + i) != c)
		i++;
	return (i);
}

int	ft_atoi_base(char const *nptr, char const *base)
{
	int		i;
	char	sign;
	int		nb;

	if (ft_base_error(base))
		return (0);
	nb = 0;
	i = 0;
	while (*(nptr + i) == ' ' || *(nptr + i) == '\f' || *(nptr + i) == '\n'
		|| *(nptr + i) == '\r' || *(nptr + i) == '\t' || *(nptr + i) == '\v')
		i++;
	sign = 1;
	while (*(nptr + i) == '+' || *(nptr + i) == '-')
	{
		if (*(nptr + i) == '-')
			sign *= -1;
		i++;
	}
	while (*(nptr + i) && ft_is_in_base(*(nptr + i), base))
	{
		nb = nb * ft_strlen(base) + ft_get_digit(*(nptr + i), base);
		i++;
	}
	return (sign * nb);
}
