/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:43:47 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 12:42:58 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_void(va_list args)
{
	unsigned long	addr;

	addr = (unsigned long)va_arg(args, void *);
	if (!addr)
	{
		ft_putstr_fd("(nil)", 1);
		ft_count(5, 0);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		ft_count(2, 0);
		ft_to_hex(addr, FT_HEX_BASE_LOW, 1);
	}
}
