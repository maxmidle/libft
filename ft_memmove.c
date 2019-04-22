/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radler <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:51:45 by radler            #+#    #+#             */
/*   Updated: 2019/04/22 16:28:42 by radler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*charsrc;
	char	*chardst;
	size_t	i;

	i = -1;
	charsrc = (char *)src;
	chardst = (char *)dst;
	if (charsrc < chardst)
		while ((int)(--len) >= 0)
			*(chardst + len) = *(charsrc + len);
	else
		while (++i < len)
			*(chardst + i) = *(charsrc + i);
	return (dst);
}
