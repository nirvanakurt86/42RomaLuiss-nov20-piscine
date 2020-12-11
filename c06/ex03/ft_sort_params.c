/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 20:05:56 by vstile            #+#    #+#             */
/*   Updated: 2020/12/10 17:06:48 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	char *my_str;

	my_str = str;
	while (*my_str)
	{
		write(1, my_str, 1);
		my_str++;
	}
	write(1, "\n", 1);
}

void	ft_sort(char *tab[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	ft_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}

/*
**                                `-osyyyyso-`
**                             `.sd+/dmmmmd/ods.`
**                           `odo/dm++mmmm/omd/od+`
**                          -hmmmo/md-ymmy:mm/ommmh-
**           ``./o++:---:///++smmdsdmhhmmhdmdsdmms++///:---:++o/.``
**             `.:/ohmmmmmmmmmh+////odmddmdo////+hmmmmmmmmmho/:.`
**               `:+//++oooyms./++++/.+::+./++++/.smyooo++//+:`
**                 `:+ss//::mh+-/so./s.hy.s/.os/-+hm::/oss+:`
**                    `-///.dmdyoooss/-ys-+ysoooydmd.///-`
**                         `/d:smmd/+hdyydh/+dmmmmd/`
**                           -ssdm//yyyyyyyy:ommmy-
**                            `:hd.yyyyyyyyys-mh:`
**                              `+hmmmmmmmmmdh+`
**                                `/osyyyyso/`
**
**          ____    ____   _______.___________.__   __       _______
**          \   \  /   /  /       |           |  | |  |     |   ____|
**           \   \/   /  |   (----`---|  |----|  | |  |     |  |__
**            \      /    \   \       |  |    |  | |  |     |   __|
**             \    / .----)   |      |  |    |  | |  `----.|  |____
**              \__/  |_______/       |__|    |__| |_______||_______|
*/
