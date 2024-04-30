/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 03:35:54 by ahiguera          #+#    #+#             */
/*   Updated: 2024/04/30 19:32:41 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int nbr)
{
	int	div;

	div = 1;
	if (nbr == 1)
		printf("1");
	while (nbr > div++)
	{
		if (nbr % div == 0)
		{
			printf("%d", div);
			if (nbr == div)
				break ;
			printf("*");
			nbr /= div;
			div = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
