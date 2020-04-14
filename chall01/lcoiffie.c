/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcoiffie.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoiffie <lcoiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:28:02 by lcoiffie          #+#    #+#             */
/*   Updated: 2020/04/14 13:19:01 by lcoiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_rgb2hex(int r, int g, int b)
{
	char	*hex;
	int		n;

	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		return (NULL);
	if (!(hex = (char *)calloc(8, sizeof(char))))
		return (NULL);
	hex[0] = '#';
	n = r / 16;
	if (n < 10)
		hex[1] = n + '0';
	if (n >= 10)
		hex[1] = n - 10 + 'a';
	n = r % 16;
	if (n < 10)
		hex[2] = n + '0';
	if (n >= 10)
		hex[2] = n - 10 + 'a';
	n = g / 16;
	if (n < 10)
		hex[3] = n + '0';
	if (n >= 10)
		hex[3] = n - 10 + 'a';
	n = g % 16;
	if (n < 10)
		hex[4] = n + '0';
	if (n >= 10)
		hex[4] = n - 10 + 'a';
	n = b / 16;
	if (n < 10)
		hex[5] = n + '0';
	if (n >= 10)
		hex[5] = n - 10 + 'a';
	n = b % 16;
	if (n < 10)
		hex[6] = n + '0';
	if (n >= 10)
		hex[6] = n - 10 + 'a';
	return (hex);
}
