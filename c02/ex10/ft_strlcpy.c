/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< Updated upstream
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:31:44 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/09 18:31:47 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int dsize)
{
	char			*osrc;
	unsigned int	nleft;

	osrc = src;
	nleft = dsize;
	if (nleft != 0)
	{
		while (--nleft != 0)
		{
			if ((*dest++ = *src++) == '\0')
				break ;
		}
	}
	if (nleft == 0)
	{
		if (dsize != 0)
			*dest = '\0';
		while (*src++)
			;
	}
	return (src - osrc - 1);
}
=======
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:44:28 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 16:55:27 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
>>>>>>> Stashed changes
