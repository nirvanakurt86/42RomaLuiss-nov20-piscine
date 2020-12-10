/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:07:45 by vstile            #+#    #+#             */
/*   Updated: 2020/11/28 17:07:55 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int ymax, int xmax)
{
	int		x;
	int		y;

	x = 1;
	while (x <= xmax)
	{
		y = 1;
		while (y <= ymax)
		{
			if ((y == 1 && x == 1) || (y == 1 && x == xmax))
				ft_putchar('A');
			else if ((y == ymax && x == 1) || (y == ymax && x == xmax))
				ft_putchar('C');
			else if ((y > 1 && y < ymax) && (x == 1 || x == xmax))
				ft_putchar('B');
			else if ((x > 1 && x < xmax) && (y == 1 || y == ymax))
				ft_putchar('B');
			else
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
