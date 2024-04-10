/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:55:19 by alex              #+#    #+#             */
/*   Updated: 2024/04/10 14:25:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\v')
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

void	put_nbr(int n)
{
	char	*decimal;

	decimal = "0123456789";
	while (n)
	{
		if (n > 9)
		{
			put_nbr(n / 10);
			put_nbr(n % 10);
		}
		else
			write(1, &decimal[n], 1);
	}
}

void	tab_mult(char *argv)
{
	int	mult;
	int	i;

	mult = ft_atoi(argv);
	i = 0;
	while (i++ < 10 && mult != -mult)
	{
		put_nbr(i);
		put_str(" x ");
		put_nbr(mult);
		put_str(" = ");
		put_nbr(i * mult);
		put_str("\n");
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
