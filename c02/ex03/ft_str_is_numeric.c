/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:28:49 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 11:29:11 by rgilles          ###   ########.fr       */
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:38:20 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 17:15:26 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
<<<<<<< Updated upstream
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < '0' || *charptr > '9')
		{
			return (0);
		}
		charptr++;
=======
	char *my_char;

	my_char = str;
	while (*my_char != 0)
	{
		if (*my_char < '0' || *my_char > '9')
		{
			return (0);
		}
		my_char++;
>>>>>>> Stashed changes
	}
	return (1);
}
