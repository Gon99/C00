/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gliano-r <gliano-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 12:01:36 by gliano-r          #+#    #+#             */
/*   Updated: 2020/02/11 09:58:31 by gliano-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	bucle1(int x, int y)
{

	while (y <= 99)
	{
		printf("x es %d: ", x);
		printf("y es %d: ", y);
		if (y == 99)
		{
			x++;
			y = x + 1;
		}
		else
		{
			y++;
		}
	}
}

void	ft_print_comb2(void)
{
	char number[4];
	int x;
	int y;

	number[0] = '0';
	number[1] = '0';
	number[2] = '0';
	number[3] = '0';
	x = 00;
	y = 00;
	bucle1(x, y);
}

int		main(void)
{
	ft_print_comb2();
}
