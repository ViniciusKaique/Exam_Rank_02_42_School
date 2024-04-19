/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:58:32 by alex              #+#    #+#             */
/*   Updated: 2024/04/19 18:22:05 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int		elem;

	elem = 0;
	while (begin_list != NULL)
	{
		elem++;
		begin_list = begin_list->next;
	}
}
