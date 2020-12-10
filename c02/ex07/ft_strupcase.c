/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:05:27 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 14:15:31 by rgilles          ###   ########.fr       */
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:41:54 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 17:20:05 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
<<<<<<< Updated upstream
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'a' && *charptr <= 'z')
		{
			*charptr -= 32;
		}
		charptr++;
=======
	char *my_char;

	my_char = str;
	while (*my_char != 0)
	{
		if (*my_char >= 'a' && *my_char <= 'z')
		{
			*my_char -= 32;
		}
		my_char++;
>>>>>>> Stashed changes
	}
	return (str);
}
