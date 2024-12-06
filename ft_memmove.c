/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:23:07 by nikhtib           #+#    #+#             */
/*   Updated: 2024/11/19 23:13:46 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	if (!dst && !src)
		return (NULL);
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	i = 0;
	if (ds == sr)
		return (ds);
	if (ds < sr)
		ds = ft_memcpy(ds, sr, len);
	else
	{
		while (len--)
			ds[len] = sr[len];
	}
	return (ds);
}
