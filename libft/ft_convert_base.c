/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:57:36 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/23 16:22:06 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	ft_get_nb_digits(int nbr, int base_len)
{
	int	n_digits;

	if (nbr == 0)
		return (1);
	n_digits = 0;
	while (nbr != 0)
	{
		n_digits++;
		nbr /= base_len;
	}
	return (n_digits);
}

static void	ft_write_number(char *res, int n, int n_digits, char const *base_to)
{
	int const	base_len = ft_strlen(base_to);

	while (n > 0)
	{
		res[n_digits - 1] = base_to[n % base_len];
		n /= base_len;
		--n_digits;
	}
}

static char	*ft_putnbr_base(int nbr, char const *base_to)
{
	int			n_digits;
	long		n;
	char		*res;

	n_digits = ft_get_nb_digits(nbr, ft_strlen(base_to));
	n = nbr;
	res = (char *)malloc((sizeof(char) * n_digits + 1));
	if (!res)
		return (NULL);
	if (nbr == 0)
	{
		res[0] = base_to[0];
		res[1] = '\0';
		return (res);
	}
	res[n_digits] = '\0';
	if (n < 0)
	{
		n_digits++;
		res[0] = '-';
		n *= -1;
	}
	ft_write_number(res, n, n_digits, base_to);
	return (res);
}

char	*ft_convert_base(char const *nptr, char const *from, char const *to)
{
	int		decimal;
	char	*base_conv;

	if (ft_base_error(from) || ft_base_error(to))
		return (NULL);
	decimal = ft_atoi_base(nptr, from);
	base_conv = ft_putnbr_base(decimal, to);
	return (base_conv);
}
