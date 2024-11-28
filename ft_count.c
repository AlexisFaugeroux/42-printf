/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:38:05 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 12:40:54 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count(size_t n, int reset)
{
	static size_t	count = 0;

	count += n;
	if (reset == 1)
		count = 0;
	return (count);
}
