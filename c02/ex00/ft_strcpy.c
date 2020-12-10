/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:17:08 by vstile            #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2020/12/02 17:22:51 by vstile           ###   ########.fr       */
=======
/*   Updated: 2020/12/03 13:19:56 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
<<<<<<< Updated upstream
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
=======
	int index;

	index = 0;
	while (*(src + index) != 0)
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + index) = 0;
>>>>>>> Stashed changes
	return (dest);
}
