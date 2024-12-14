/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:05:04 by afaugero          #+#    #+#             */
/*   Updated: 2024/12/14 20:08:07 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_hex(unsigned long nb, char c)
{
	char			*str;
	size_t			len;

	if (c == 'x')
		str = ft_ulong_itoa_base(nb, FT_HEX_BASE_LOW);
	else
		str = ft_ulong_itoa_base(nb, FT_HEX_BASE_UP);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
