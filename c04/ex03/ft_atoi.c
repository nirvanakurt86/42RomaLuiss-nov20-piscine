/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:09:09 by vstile            #+#    #+#             */
/*   Updated: 2020/12/09 15:56:25 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		sign;
	long	number_sx;

	number_sx = 0;
	sign = 1;
	while (*str)
	{
		while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = sign * -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			number_sx = number_sx * 10 + *str - '0';
			str++;
		}
		return (sign * (int)number_sx);
	}
	return (sign * (int)number_sx);
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
