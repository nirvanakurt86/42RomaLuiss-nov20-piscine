/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:09:50 by vstile            #+#    #+#             */
/*   Updated: 2020/11/29 17:43:52 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char p1;
	char p2;
	char p3;

	p1 = '0' - 1;
	while (p1++ < '7')
	{
		p2 = p1;
		while (p2++ < '8')
		{
			p3 = p2;
			while (p3++ < '9')
			{
				if (!(p1 == '0' && p2 == '1' && p3 == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(p1);
				ft_putchar(p2);
				ft_putchar(p3);
			}
		}
	}
}
