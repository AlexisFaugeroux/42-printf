/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:07:48 by afaugero          #+#    #+#             */
/*   Updated: 2024/12/05 10:02:46 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

size_t	ft_count(size_t n, int reset);
void	ft_write(va_list args, char const *s);
void	ft_parse(va_list args, char c);
void	ft_parse_char(va_list args);
void	ft_parse_str(va_list args);
void	ft_parse_void(va_list args);
void	ft_parse_int(va_list args);
void	ft_parse_udec(va_list args);
void	ft_parse_hex_low(va_list args);
void	ft_parse_hex_up(va_list args);
void	ft_to_hex(unsigned long nbr, char const *base, int fd);
void	ft_putnbr(int nbr, int fd);
void	ft_putunbr(unsigned int nbr, int fd);

#endif
