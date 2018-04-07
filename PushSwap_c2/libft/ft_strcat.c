/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:32:06 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/05 16:16:54 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		lend;
	int		lens;

	i = 0;
	lend = 0;
	lens = 0;
	while (dest[lend] != '\0')
		lend++;
	while (src[lens] != '\0')
		lens++;
	while (i <= lens)
	{
		dest[lend + i] = src[i];
		i++;
	}
	return (dest);
}
