/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:12:34 by vstile            #+#    #+#             */
/*   Updated: 2020/12/07 16:00:26 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned nb)
{
	unsigned i_dest;
	unsigned i_src;

	i_dest = 0;
	while (dest[i_dest])
	{
		i_dest++;
	}
	i_src = 0;
	while (src[i_src] && i_src < nb)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = 0;
	return (dest);
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
