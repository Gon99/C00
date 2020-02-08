/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gliano-r <gliano-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:51:15 by gliano-r          #+#    #+#             */
/*   Updated: 2020/02/08 19:27:31 by gliano-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number < 58)
	{
		write(1, &number, 1);
		++number;
	}
}

int		main(void)
{
	ft_print_numbers();
}
