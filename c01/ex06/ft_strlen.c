/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 10:51:02 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/06 10:51:05 by rgilles          ###   ########.fr       */
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:32:14 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 16:32:18 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
<<<<<<< Updated upstream
	char	*charptr;
	int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
=======
	int		index;
	char	a;

	index = 0;
	a = *str;
	while (a)
	{
		index++;
		str++;
		a = *str;
	}
	return (index);
>>>>>>> Stashed changes
}
