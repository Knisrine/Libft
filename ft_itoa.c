/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:36:19 by  nikhtib          #+#    #+#             */
/*   Updated: 2024/11/19 17:50:43 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n)
{
	return (n < 0);
}

static int	len(int n)
{
	int	count;

	if (n == 0)
		return (1);
	if (is_negative(n))
		n *= -1;
	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*trans(char *ptr, int l, int n)
{
	while (l > 0 || (n != 0))
	{
		ptr[l] = (n % 10) + 48;
		n = n / 10;
		l--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*ptr;

	l = len(n);
	if (is_negative(n))
		l += 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc(l + 1);
	if (ptr == NULL)
		return (NULL);
	if (is_negative(n))
	{
		n *= -1;
		ptr[0] = '-';
	}
	ptr[l] = '\0';
	l--;
	if (l == 0)
		ptr[l] = '0';
	ptr = trans(ptr, l, n);
	return (ptr);
}
