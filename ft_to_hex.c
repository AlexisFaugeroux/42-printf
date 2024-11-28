/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:11:02 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 12:42:14 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_to_hex(unsigned long nbr, char const *base, int fd)
{
	size_t const	base_len = ft_strlen(base);

	if (nbr > base_len - 1)
		ft_to_hex(nbr / base_len, base, fd);
	ft_putchar_fd(base[nbr % base_len], fd);
	ft_count(1, 0);
}
