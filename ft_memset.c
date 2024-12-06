/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:09:04 by nikhtib           #+#    #+#             */
/*   Updated: 2024/11/19 21:55:24 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*pt;

	i = 0;
	pt = (unsigned char *)b;
	while ((size_t)i < len)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (pt);
}
