/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:07:48 by afaugero          #+#    #+#             */
/*   Updated: 2024/12/14 20:06:01 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
void	ft_write(va_list args, char const *s, int *count);
int		ft_parse(va_list args, char c);
int		ft_parse_char(char c);
int		ft_parse_str(char *str);
int		ft_parse_void(void *addr);
int		ft_parse_int(int nbr);
int		ft_parse_udec(unsigned int nbr);
int		ft_parse_hex(unsigned long nb, char c);

#endif
