/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:43:47 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/23 14:19:21 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"
#include <stdio.h>

void	ft_parse_void(va_list args)
{
	unsigned long	addr;

	addr = (unsigned long)va_arg(args, void *);
	if (!addr)
		ft_putstr_fd("(nil)", 1);
	else
	{
		ft_putstr_fd("0x", 1);
		ft_putnbr_ulong_base_fd(addr, FT_HEX_BASE_LOW, 1);
	}
}
