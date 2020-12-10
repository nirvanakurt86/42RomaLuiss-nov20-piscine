/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:29:05 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/06 17:29:07 by rgilles          ###   ########.fr       */
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:16:05 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 17:49:50 by vstile           ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
<<<<<<< Updated upstream
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
=======
	unsigned int	index;

	index = 0;
	while (index < n && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = 0;
		index++;
>>>>>>> Stashed changes
	}
	return (dest);
}
