/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:55:25 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 12:03:54 by rgilles          ###   ########.fr       */
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:37:36 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 17:09:40 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
<<<<<<< Updated upstream
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'A')
		{
			return (0);
		}
		if ((*charptr > 'Z' && *charptr < 'a') || (*charptr > 'z'))
		{
			return (0);
		}
		charptr++;
=======
	char *my_char;

	my_char = str;
	while (*my_char != 0)
	{
		if (*my_char < 'A')
		{
			return (0);
		}
		if ((*my_char > 'Z' && *my_char < 'a') || (*my_char > 'z'))
		{
			return (0);
		}
		my_char++;
>>>>>>> Stashed changes
	}
	return (1);
}
