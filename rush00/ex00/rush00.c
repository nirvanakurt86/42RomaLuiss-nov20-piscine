/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:31:49 by ebrovard          #+#    #+#             */
/*   Updated: 2020/11/28 17:11:33 by vstile           ###   ########.fr       */
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
			if ((x == 1 && y == 1) || (x == xmax && y == ymax))
				ft_putchar('o');
			else if ((x == 1 && y == ymax) || (y == 1 && x == xmax))
				ft_putchar('o');
			else if ((x == 1 || x == xmax) && (y < ymax && y > 1))
				ft_putchar('-');
			else if ((y == 1 || y == ymax) && (x < xmax && x > 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
