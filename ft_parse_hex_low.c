/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_hex_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:05:04 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/23 16:41:41 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_parse_hex_low(va_list args)
{
	ft_putnbr_ulong_base_fd(va_arg(args, int), FT_HEX_BASE_LOW, 1);
}
