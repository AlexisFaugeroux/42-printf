/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:07:53 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/21 11:56:03 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*curr;

	count = 0;
	if (!lst)
		return (count);
	curr = lst;
	count = 1;
	while (curr->next)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}
