/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:21:49 by vstile            #+#    #+#             */
/*   Updated: 2020/12/03 12:17:09 by vstile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int dozen;
	int remainder;

	dozen = *a / *b;
	remainder = *a % *b;
	*a = dozen;
	*b = remainder;
}
