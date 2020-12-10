/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:33:13 by ebrovard          #+#    #+#             */
/*   Updated: 2020/11/28 17:34:30 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int ymax, int xmax)
{
	int	x;
	int	y;

	x = 1;
	while (x <= xmax)
	{
		y = 1;
		while (y <= ymax)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == ymax))
				ft_putchar('A');
			else if ((y == 1 && x == xmax) || (x == xmax && y == ymax))
				ft_putchar('C');
			else if ((x == 1 || x == xmax) && (y < ymax && y > 1))
				ft_putchar('B');
			else if ((y == 1 || y == ymax) && (x < xmax && x > 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
