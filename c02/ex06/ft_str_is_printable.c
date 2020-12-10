/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:58:17 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 12:59:54 by rgilles          ###   ########.fr       */
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:40:30 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 17:17:54 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
<<<<<<< Updated upstream
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)
		{
			return (0);
		}
		charptr++;
=======
	char *my_char;

	my_char = str;
	while (*my_char != 0)
	{
		if (*my_char <= 31 || *my_char == 127)
		{
			return (0);
		}
		my_char++;
>>>>>>> Stashed changes
	}
	return (1);
}
