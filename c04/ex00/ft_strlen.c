/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:04:24 by vstile            #+#    #+#             */
/*   Updated: 2020/12/08 18:06:43 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int lenght;
	int i;

	lenght = 0;
	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	lenght = i;
	return (lenght);
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
