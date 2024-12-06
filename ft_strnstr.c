/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:32:43 by nikhtib           #+#    #+#             */
/*   Updated: 2024/11/29 18:09:29 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hystack, const char *needl, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	j;
	size_t	len_needl;

	len_needl = ft_strlen(needl);
	if (len_needl == 0)
		return ((char *)hystack);
	if (!len && !hystack)
		return (NULL);
	i = 0;
	j = 0;
	while (hystack[i] != '\0' && i < len)
	{
		k = 0;
		while (hystack[i + k] == needl[j + k] && (i + k) < len)
		{
			k++;
			if (k == len_needl)
				return ((char *)&hystack[i]);
		}
		i++;
	}
	return (NULL);
}
