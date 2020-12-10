/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:13:32 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 16:14:38 by rgilles          ###   ########.fr       */
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:34 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 17:21:23 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
<<<<<<< Updated upstream
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'A' && *charptr <= 'Z')
		{
			*charptr += 32;
		}
		charptr++;
=======
	char *my_char;

	my_char = str;
	while (*my_char != 0)
	{
		if (*my_char >= 'A' && *my_char <= 'Z')
		{
			*my_char += 32;
		}
		my_char++;
>>>>>>> Stashed changes
	}
	return (str);
}
