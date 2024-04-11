/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:19:47 by alex              #+#    #+#             */
/*   Updated: 2024/04/11 02:49:59 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int base)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	if (base < 16)
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		while (str[i++] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
				result *= base + (str[i] - '0');
			else if (str[i] >= 'A' && str[i] <= 'Z')
				result *= base + (str[i] - '7');
			else if (str[i] >= 'a' && str[i] <= 'z')
				result *= base + (str[i] - 'W');
		}
	}
	return (sign * result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base(18790, 4));
	return (0);
}
